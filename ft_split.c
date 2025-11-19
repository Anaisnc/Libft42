/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:29:03 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/19 14:28:49 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}

int	ft_isc(char c, char const s)
{
	if (s == c)
		return (1);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	k;

	res = malloc(sizeof(char*) * ft_strlen(s));
	if (!res)
		return (0);
	i = 0;
	j = 0;
	k = 0;
	while (s[i] && !ft_isc(c, s[i]))
		i++;
	if (s[i] && ft_isc(c, s[i]) && j < i)
	{
		res[k][j] = s[j];
		j++;
	}
	i++;
	k++;
	res[k][j] = '\0';
	return (res);
}
/*int	main(void)
{
	const char *str1 = "butterflies";
	const char c = 'f';
	size_t	i;
	size_t	j;
	
	char **result = ft_split(str1, c);
	i = 0;
	j = 0;
	while (result[i])
	{
		__builtin_printf("%s\n", result[i]);
		i++;
	}
	free(result);
}*/