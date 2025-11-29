/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 13:18:34 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/21 16:16:54 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	
	node1 = ft_lstnew(strdup("start")); 
	node2 = ft_lstnew(strdup("hello"));
	node3 = ft_lstnew(strdup("world"));
	node1->next = node2;
	node2->next = node3;
	int size = ft_lstsize(node1);
	__builtin_printf("List contents : \n");
	t_list *tmp = node1;
	while (tmp)
	{
		__builtin_printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	__builtin_printf("NULL\n");

	t_list *last = ft_lstlast(node1);
	if (last)
	__builtin_printf("Last node content: %s\n", (char *)last->content);
	else
	__builtin_printf("Last node is NULL\n");
	ft_lstdelone(node1, free);
	ft_lstdelone(node2, free);
	ft_lstdelone(node3, free);
	return (0);
	}*/