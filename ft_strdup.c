/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 19:28:28 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/15 18:35:24 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		len;

	len = ft_strlen(s);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	ft_strcpy(dup, s);
	return (dup);
}
/*
#include <stdio.h>

int	main()
{
	char *original = "Ich lerne die Programmierugssprache C.";
	char *duplicate = ft_strdup(original);
	printf("It is duplicated: %s", duplicate);
	free(duplicate);
	return (0);
}*/
