/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:54:33 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/25 16:58:33 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s && s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (count);
}

static int	word_size(char const *str, char c, int i)
{
	int	word_size;

	word_size = 0;
	while (str[i] != c && str[i])
	{
		word_size++;
		i++;
	}
	return (word_size);
}

static void	free_split_result(char **result, int j)
{
	while (j-- > 0)
	{
		free(result[j]);
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		size;
	int		j;

	i = 0;
	j = -1;
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (++j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		size = word_size(s, c, i);
		result[j] = ft_substr(s, i, size);
		if (!result[j])
		{
			free_split_result(result, j);
			return (NULL);
		}
		i += size;
	}
	result[j] = 0;
	return (result);
}
