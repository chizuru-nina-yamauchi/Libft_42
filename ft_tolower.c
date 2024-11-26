/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:37:34 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/12 19:49:09 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (c + ('a' - 'A'));
	}
	return (c);
}
/*
#include <stdio.h>
int	main()
{
	char ch = 'U';
	printf("%c becomes %c", ch, ft_tolower(ch));
	return (0);
}*/
