/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 19:41:59 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/23 19:47:53 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	const char src_arr[] = "Die Vergangenheit";
	char dst_arr[30];
	ft_memcpy(dst_arr, src_arr, 7 * sizeof(char));
	printf("'%s' is copied from src '%s'.", dst_arr, src_arr);
	return 0;
}*/
