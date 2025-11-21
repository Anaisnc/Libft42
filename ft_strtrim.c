/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:58:23 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/20 13:43:48 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	beg;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	beg = 0;
	end = ft_strlen(s1);
	if (s1[0] != '\0' && set[0] != '\0')
	{
		while (s1[beg] && ft_set(s1[beg], set))
			beg++;
		while (end > beg && ft_set(s1[end - 1], set))
			end--;
	}
	str = malloc(sizeof(char) * ((end - beg) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (beg < end)
		str[i++] = s1[beg++];
	str[i] = '\0';
	return (str);
}
/*int	main(void)
{
	char const *s1 = "AB-**ABC**-BA";
	char c = 'B';
	char const *set = "AB";
	__builtin_printf("%d\n", ft_set(c, set));
	__builtin_printf("-----------------------------\n");
	__builtin_printf("%s\n", ft_strtrim(s1, set));
	return (0);
}*/