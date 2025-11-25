/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:59:53 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/24 12:51:11 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (char)c)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	else
		return (0);
}

/*#include <string.h>

int	main(void)
{
	const char *s = "teste";
	__builtin_printf("ft_strchr : %s\n", ft_strchr(s, 357));
	__builtin_printf("**********************************\n");
	__builtin_printf("Real function strchr : \n");
	__builtin_printf("%s\n", strchr(s, 357));
	return (0);
}*/