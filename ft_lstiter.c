/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lisiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:59:57 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/26 23:00:33 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_ptr;

	if (!lst)
		return ;
	lst_ptr = lst;
	while (lst_ptr != NULL)
	{
		(*f)(lst_ptr->content);
		lst_ptr = lst_ptr->next;
	}
}
