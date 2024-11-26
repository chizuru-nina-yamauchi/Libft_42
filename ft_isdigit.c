/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 19:11:12 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/11 19:39:06 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
/*
#include <stdio.h>
int	main()
{
	char ch = 's';
	if (ft_isdigit(ch))
	{
		printf("It is a digit");
	}else
	{
		printf("It is not adigit");
	}

	return (0);
}*/
