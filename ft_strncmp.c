/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:36:49 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/12 18:02:51 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "ab";
	char s2[] = "abc";
	int nb = 3;

	__builtin_printf("%d\n", __builtin_strncmp(s1, s2, nb));
	__builtin_printf("%d\n", ft_strncmp(s1, s2, nb));
	return (0);
}*/