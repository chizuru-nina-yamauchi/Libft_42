/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:51:40 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/25 16:54:02 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	my_func(unsigned int i, char *arr)
{
	if (i % 2 == 0)
	{
		*arr = ft_toupper(*arr);
	}else
	{
		*arr = ft_tolower(*arr);
	}
}
int	main()
{
	char	arr1[] = "Hellooooooooo";
	printf("Original string: %s\n", arr1);
	ft_striteri(arr1, my_func);
	printf("The modified string: %s\n", arr1);
	return (0);
}*/
