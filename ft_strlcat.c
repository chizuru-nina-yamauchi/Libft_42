/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:12:27 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/15 21:01:16 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	space_left;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	space_left = size - dst_len - 1;
	while (space_left > i && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
int	main()
{
	char	src[] = "Soy japonesa.";
	char	dst[] = "Ich bin gerade mit dem Ubahn angekommen.";
	size_t	len = ft_strlcat(dst, src, 50);
	printf("The concatinated string: %s\n", dst);
	printf("The length of initial length of dst + src: %zu\n", len);
	return (0);
}
*/
