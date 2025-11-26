/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:48:43 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/26 15:11:46 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int	main(void)
{
	t_list *initial;
	initial = ft_lstnew("start");
	t_list *lst = initial;
	t_list *node1;
	t_list *node2;
	
	node1 = ft_lstnew("world");
	node2 = ft_lstnew("hello");
	
	__builtin_printf("Before ft_lstadd_front : \n");
	if (lst == NULL)
		__builtin_printf("Empty list\n");
	
	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	
	__builtin_printf("\nAfter ft_lstadd_front : \n");
	t_list *tmp = lst;
	while (tmp)
	{
		__builtin_printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	__builtin_printf("NULL\n");
	return (0);
}*/