/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:40:53 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/12 19:48:23 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') 
		|| (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>
int	main()
{
	char ch = '@';
	if(ft_isalnum(ch))
	{
		printf("It is alphanumeric");
	}else
	{
		printf("It is not alphanumeric");
	}

	return (0);
}*/
