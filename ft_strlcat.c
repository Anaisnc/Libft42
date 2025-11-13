/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:55:34 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/13 18:04:30 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	len_s = 0;
	len_d = 0;
	while (dst[len_d] && len_d < size)
		len_d++;
	while (src[len_s])
		len_s++;
	if (len_d == size)
		return (len_s + len_d);
	i = 0;
	while (src[i] && i < (size - len_d - 1))
	{
		dst[len_d + i] = src[i];
		i++;
	}
	dst[len_d + i] = '\0';
	return (len_d + len_s);
}

/*#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char dst[] = "pqrstuvwxyz";
	const char src[] = "abcd";
	size_t size = 10;
	ft_strlcat(dst, src, size);
	__builtin_printf("dst+src : %zu\n", ft_strlcat(dst, src, size));
	__builtin_printf("dst : %s\n", dst);

	__builtin_printf("-------------------\n");
	__builtin_printf("Real function strlcat : \n");
	char dst1[] = "pqrstuvwxyz";
	const char src1[] = "abcd";
	size_t size1 = 10;
	strlcat(dst1, src1, size1);
	__builtin_printf("dst+src : %zu\n", strlcat(dst1, src1, size1));
	__builtin_printf("dst : %s\n", dst1);
	return (0);
}*/