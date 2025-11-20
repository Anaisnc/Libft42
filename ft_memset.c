/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 19:56:50 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/20 13:42:33 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	if (!s)
		return ;
	tab = s;
	i = 0;
	while (i < n)
	{
		tab[i] = c;
		i++;
	}
	return (s);
}
/*int	main(void)
{
	size_t i = 0;
	int	c = 2;
	int tab[] = {8, 24, 5};
	size_t n = sizeof( int ) * 3;

	memset(tab, c, n);
	while (i < 3)
	{
		__builtin_printf("after ft_memset : %d\n", tab[i]);
		i++;
	}
	return (0);
}*/