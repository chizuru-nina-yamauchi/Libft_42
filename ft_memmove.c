/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:24:55 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/24 15:47:32 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t		i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main()
{
	char	*arr1 = "Sehr geehrte Damen und Herren, ";
	char 	arr2[30];
	size_t	byte = 10;
	ft_memmove(arr2, arr1, byte);
	printf("The memory was moved from src '%s' for %zu characters: %s", arr1, byte, arr2);
	return (0);
}*/
