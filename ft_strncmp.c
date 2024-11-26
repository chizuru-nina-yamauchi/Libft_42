/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:55:55 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/15 19:28:48 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char *arr1 = "ABCDEH";
	char *arr2 = "ABCDEFG";
	int	result = ft_strncmp(arr1, arr2, 8);
	if (result == 0)
	{
		printf("They are equal.");
	}else if (result > 0)
	{
		printf("arr1 is bigger than arr2");
	}else
	{
		printf("arr1 is smaller than arr2");
	}
	return (0);
}*/
