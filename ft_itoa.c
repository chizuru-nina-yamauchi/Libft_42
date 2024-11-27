/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:08:14 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/24 19:40:49 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_num_of_digits(int n)
{
	int	digits;

	digits = 0;
	if (n <= 0)
	{
		digits = 1;
		if (n == 0)
			return (digits);
		n = -n;
	}
	while (n != 0)
	{
		digits++;
		n /= 10;
	}
	return (digits);
}

void	convert_to_string(char *str, int n, int digits)
{
	str[digits] = '\0';
	while (digits > 0)
	{
		str[--digits] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		num_of_digits;	
	char	*create;

	if (n == INT_MIN)
	{
		return (ft_strdup("-2147483648"));
	}
	num_of_digits = get_num_of_digits(n); 
	create = (char *)malloc((num_of_digits + 1) * sizeof(char));
	if (!create)
	{
		return (NULL);
	}
	else if (n < 0)
	{
		create[0] = '-';
		convert_to_string(create + 1, -n, num_of_digits - 1);
	}
	else
	{
		convert_to_string(create, n, num_of_digits);
	}
	return (create);
}
