/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:48:25 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/24 15:09:31 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = (void *)malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
#include <stdio.h>
int	main()
{
	int	*arr = (int *)ft_calloc(5,sizeof(int));
	if (arr != NULL)
	{
		printf("Array pointer: %p\n", (void *)arr);
		free(arr);
	}else
	{
		printf("Memory allocation failed");
	}
	return (0);
}*/
