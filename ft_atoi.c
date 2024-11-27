/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:06:10 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/14 20:53:59 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_whitespace(const char *nptr, int *i)
{
	while (nptr[*i] == ' ' || nptr[*i] == '\f'
		|| nptr[*i] == '\n' || nptr[*i] == '\r'
		|| nptr[*i] == '\t' || nptr[*i] == '\v')
	{
		*i = *i + 1;
	}
}

int	ft_sign(const char *nptr, int *i)
{
	int	sign;

	sign = 1;
	if (nptr[*i] == '-')
	{
		sign = -1;
		*i = *i + 1;
	}
	else if (nptr[*i] == '+')
	{
		*i = *i + 1;
	}
	return (sign);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	digit;
	int	i;
	int	sign;

	result = 0;
	digit = 0;
	i = 0;
	skip_whitespace(nptr, &i);
	sign = ft_sign(nptr, &i);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		digit = nptr[i] - '0';
		result = result * 10 + digit;
		i++;
	}
	return (sign * result);
}