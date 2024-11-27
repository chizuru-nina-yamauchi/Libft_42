/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:01:57 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/23 20:42:51 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*concatinate;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	concatinate = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (concatinate == NULL)
		return (NULL);
	ft_memcpy(concatinate, s1, s1_len);
	ft_memcpy(concatinate + s1_len, s2, s2_len);
	concatinate[s1_len + s2_len] = '\0';
	return (concatinate);
}