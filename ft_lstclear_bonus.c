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

void	del(void *c)
{
	free(c);
}

/*int	main(void)
{
	t_list **lst = NULL;
	t_list *initial;
	t_list *node1;
	t_list *node2;
	
	initial = ft_lstnew("start"); //ici faire un dup ? pour pouvoir les free
	node1 = ft_lstnew("world"); 
	node2 = ft_lstnew("hello");
	ft_lstadd_back(lst, node1);
	ft_lstadd_back(lst, node2);

	__builtin_printf("Before ft_lstclear : \n");
	
	t_list *tmp = *lst;
	while (tmp)
	{
		__builtin_printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	__builtin_printf("NULL\n");
	
	__builtin_printf("\nAfter ft_lst_clear : \n");
	ft_lstclear(lst, del);
	t_list *tmp2 = *lst;
	while (tmp2)
	{
		__builtin_printf("%s -> ", (char *)tmp2->content);
		tmp2 = tmp2->next;
	}
	__builtin_printf("NULL\n");
	return (0);
}*/
