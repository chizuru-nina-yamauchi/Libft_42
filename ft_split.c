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

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	in_word;
	
	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if(*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*allocate_word(char const *start, size_t len)
{
	char	*word;

	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, start, len + 1);
	return (word);
}

static void	free_split_result(char **result)
{
	size_t	i;
	
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	**process_and_split(char const *s, char c, char **result)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len = 0;
	while (s[j])
	{
		if (s[j] != c)
			len++;
		if ((s[j] == c || s[j + 1] == '\0') && len > 0)
		{
			result[i] = allocate_word(s + j - len + (s[j + 1] == '\0'), len);
			if (!result[i])
			{
				free_split_result(result);
				return (NULL);
			}
			i++;
			len = 0;
		}
		j++;
	}
	result[i] = NULL;
	return (result);
	
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	
	words = count_words(s, c);
	if (!s)
		return (NULL);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = process_and_split(s, c, result);
	if (!result)
		return (NULL);
	return (result);
}