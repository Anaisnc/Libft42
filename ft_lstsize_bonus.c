/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:59:41 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/21 16:10:09 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
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
	__builtin_printf("List size : %d\n", size);
	ft_lstdelone(node1, free);
	ft_lstdelone(node2, free);
	ft_lstdelone(node3, free);
	return (0);
	}*/