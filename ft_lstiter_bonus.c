/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 16:13:37 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/21 16:16:50 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*#include <stdio.h>
#include <string.h>

void	print_upper(void *content)
{
	char *str = (char *)content;
	size_t	i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
			i++;
	}
}

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
	__builtin_printf("Before: \n");
	t_list *tmp = node1;
	while (tmp)
	{
		__builtin_printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	__builtin_printf("NULL\n");
	ft_lstiter(node1, print_upper);
	__builtin_printf("After:\n");
	tmp = node1;
	while (tmp)
	{
		__builtin_printf("%s -> ", (char *)tmp->content);
		tmp = tmp->next;
	}
	__builtin_printf("NULL\n");
	ft_lstdelone(node1, free);
	ft_lstdelone(node2, free);
	ft_lstdelone(node3, free);
	return (0);
	}*/