/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:10:01 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/24 13:31:33 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	final_size;

	final_size = size * nmemb;
	array = malloc(final_size);
	if (!array)
		return (0);
	ft_memset(array, 0, final_size);
	return (array);
}
