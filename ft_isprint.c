/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:24:27 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/11 20:33:55 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c < 127);
}
/*
#include <stdio.h>
int	main()
{
	char ch = ' ';
	if (ft_isprint(ch))
	{
		printf("Ascii %d is printable", ch);
	}else
	{
		printf("It is not printable");
	}
	return (0);
}*/
