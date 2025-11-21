/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 12:41:56 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/20 13:42:30 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*xdest;
	const unsigned char	*xsrc;

	if (!dest && !src)
		return (NULL);
	xdest = dest;
	xsrc = src;
	i = 0;
	if (xdest > xsrc)
	{
		i = n;
		while (i > 0)
		{
			xdest[i - 1] = xsrc[i - 1];
			i--;
		}
	}
	else if (xdest < xsrc)
	{
		while (i < n)
		{
			xdest[i] = xsrc[i];
			i++;
		}
	}
	return (xdest);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char		dest[] = {"abcdefg"};
	//const char	src[] = {"123456789"};
	size_t		n;
	int			i;

	n = 5;
	i = 0;
	ft_memmove(dest, dest + 2, n);
	while (dest[i])
	{
		__builtin_printf("%c", dest[i]);
		i++;
	}
	return (0);
}*/
