/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:34:14 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/15 18:38:58 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
int	main()
{
	char *str = "aiueo";
	unsigned int length = ft_strlen(str);
	printf("The length of %s is %d.", str, length);
	return (0);
}*/
