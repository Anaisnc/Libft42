/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:10:01 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/25 14:11:16 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	final_size;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	final_size = size * nmemb;
	array = malloc(final_size);
	if (!array)
		return (NULL);
	ft_memset(array, 0, final_size);
	return (array);
}
/*int	main(void)
{
	size_t nmemb = 4;
	size_t size = 3;
	size_t i;

	size_t *pointer = calloc(nmemb, size);

	i = 0;
	while (i < nmemb - 1)
	{
		__builtin_printf("%zu\n", pointer[i]);
		i++;
	}
	__builtin_printf("\n");
	free(pointer);
	return (0);
}*/