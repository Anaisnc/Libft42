/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:57:28 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/20 13:42:26 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*xdest;
	const unsigned char	*xsrc;

	if (!dest || !src)
		return (NULL);
	xdest = (unsigned char *)dest;
	xsrc = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		xdest[i] = xsrc[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	int array[] = {54, 85, 20, 63, 21};
	int *copy = NULL;
	int length = sizeof(int) * 5;

	//Memory allocation and copy
	copy = (int *)malloc(length);
	ft_memcpy(copy, array, length);

	//Display the copied values
	for (length = 0; length < 5; length++)
	{
		printf("%d ", copy[length]);
	}
	printf("\n");

	free(copy);

	return (EXIT_SUCCESS);
}*/