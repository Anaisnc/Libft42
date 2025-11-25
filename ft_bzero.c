/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:19:34 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/24 12:50:47 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*tab;

	tab = s;
	i = 0;
	while (i < n)
	{
		tab[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	size_t i = 0;
	int tab[] = {8, 24, 5};
	size_t n = sizeof( int ) * 3;

	ft_bzero(tab, n);
	while (i < 3)
	{
		__builtin_printf("after ft_bzero : %d\n", tab[i]);
		i++;
	}
	return (0);
}*/