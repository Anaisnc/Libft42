/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 20:38:52 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/20 13:43:38 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		while (big[i + j] == little[j] && little[j] && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
		j = 0;
	}
	return (0);
}

/*#include <string.h>

int	main(void)
{
	char big[] = "lorem ipsum dolor sit amet";
	char little[] = "dolor";
	size_t len = 17;

	//__builtin_printf("%s\n", strnstr(big, little, len));
	__builtin_printf("%s\n", ft_strnstr(big, little, len));
	return (0);
}*/