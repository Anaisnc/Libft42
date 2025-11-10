/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 11:57:28 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/10 17:31:57 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*final;
	const unsigned char	*beg;

	final = dest;
	beg = src;
	i = 0;
	if (beg == NULL && final == NULL)
	{
		return (final);
	}
	while (i < n)
	{
		final[i] = beg[i];
		i++;
	}
	return (final);
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