/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyamauch <cyamauch@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 23:00:45 by cyamauch          #+#    #+#             */
/*   Updated: 2024/11/26 23:01:45 by cyamauch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;
	
	new_list = NULL;
	while (lst)
	{
		if (!(new_content = f(lst->content)))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		if (!(new_node = ft_lstnew(new_content)))
		{
			del(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

void	del_string(void *content)
{
	free(content);
}

void *transform_content(void *content) 
{
   	char *str = (char *)content;
   	size_t	len = ft_strlen(str) + 1;
	char *new_str = malloc(len);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, str, len);
	return new_str;
}

#include <stdio.h>

int	main()
{
	t_list *node1 = ft_lstnew("ace");
	t_list *node2 = ft_lstnew("dagane");
	node1->next = node2;
	t_list *new_list = ft_lstmap(node1, transform_content, del_string);
	t_list *current = new_list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	ft_lstclear(&new_list, del_string);
	return 0;
}
