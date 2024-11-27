/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 22:58:48 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/26 22:59:40 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	if (!lst || !del)
		return;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	*lst= NULL;
}

void	del_string(void *content)
{
	free(content);
}

#include <stdio.h>

int	main()
{
	char *str1 = ft_strdup("first");
	char *str2 = ft_strdup("second");
	char *str3 = ft_strdup("third");
	
	t_list *node1 = ft_lstnew(str1);
	t_list *node2 = ft_lstnew(str2);
	t_list *node3 = ft_lstnew(str3);
	
	node1->next = node2;
	node2->next = node3;
	
	printf("Before clearing:\n");
	t_list *current = node1;
	while (current)
	{
		printf("%s -> ", (char *)current->content);
		current = current->next;
	}
	printf("NULL\n");
	ft_lstclear(&node1, del_string);
	printf("After clearing:\n");
	if (node1 == NULL)
	{
		printf("List is now empty and cleared.\n");
	}
}
