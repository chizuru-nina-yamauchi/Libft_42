/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:40:24 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/13 19:19:33 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	value;

	p = (unsigned char *)s;
	value = (unsigned char)c;
	while (n--)
	{
		*p = value;
		p++;
	}
	return (s);
}
/*
#include <stdio.h>

int	main()
{
	char arr[] = "Donde esta el bano?";
	char ch = 'h';
	ft_memset(arr + 6, ch, 6*sizeof(char));
	printf("Before: %s\n", "Donde esta el bano?");
	printf("After memset: %s\n", arr);
	return (0);	
}
*/
