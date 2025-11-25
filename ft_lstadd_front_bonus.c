/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:48:43 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/25 18:02:30 by ancourt          ###   ########.fr       */
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
/*int main(void)
{
	t_list *first = ft_lstnew("world");
	t_list *second = ft_lstnew("hello");
	ft_lstadd_front(&first, second);
	__builtin_printf("%s %s\n", (char *)second->content, (char *)second->next->content);
	return (0);
}*/