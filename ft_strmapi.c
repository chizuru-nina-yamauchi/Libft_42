/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:23:09 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/25 16:50:57 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>

char	example_function(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (char)ft_toupper(c);  // convert to uppercase if index is even
	}
	return c; // leave the character unchanged if index is odd
}

int	main()
{
	char	*s = "ayayayayayay";
	char	*new_string = ft_strmapi(s, example_function);
	printf("The string '%s' becomes: %s\n", s, new_string);
	free(new_string);
	return (0); 
}*/
