/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:11:46 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/26 19:26:38 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
	*lst = NULL;
}

/*#include <stdio.h>
#include <string.h>

void	del(void *c)
{
	free(c);
}

int	main(void)
{
	t_list *lst = NULL;
	t_list *initial;
	t_list *node1;
	t_list *node2;
	t_list *node3;
	
	node1 = ft_lstnew(strdup("start")); 
	node2 = ft_lstnew(strdup("hello"));
	node3 = ft_lstnew(strdup("world"));

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	__builtin_printf("Before ft_lstclear : \n");
	t_list *tmp = lst;
	while (tmp)
	{
		__builtin_printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	__builtin_printf("NULL\n");
	
	ft_lstclear(&lst, del);
	__builtin_printf("\nAfter ft_lst_clear : \n");
	if (lst == NULL)
	__builtin_printf("List is Null\n");
	else
	{
		t_list *tmp2 = lst;
		while (tmp2)
		{
			__builtin_printf("%s -> ", (char *)tmp2->content);
			tmp2 = tmp2->next;
		}
		__builtin_printf("NULL\n");
	}
	return (0);
}*/
