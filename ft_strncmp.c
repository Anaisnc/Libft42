/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:36:49 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/14 13:42:06 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*st1;
	const unsigned char	*st2;

	st1 = (const unsigned char *)s1;
	st2 = (const unsigned char *)s2;
	i = 0;
	while ((st1[i] || st2[i]) && i < n)
	{
		if (st1[i] != st2[i])
			return (st1[i] - st2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "Test\200";
	char s2[] = "Test\0";
	int nb = 6;

	__builtin_printf("%d\n", __builtin_strncmp(s1, s2, nb));
	__builtin_printf("%d\n", ft_strncmp(s1, s2, nb));
	return (0);
}*/