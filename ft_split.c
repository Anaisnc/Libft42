/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancourt <ancourt@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 15:29:03 by ancourt           #+#    #+#             */
/*   Updated: 2025/11/20 13:37:55 by ancourt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_dup(char const *s, size_t beg, size_t end)
{
	char	*word;
	size_t	i;

	word = malloc(sizeof(char) * (end - beg + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (beg < end)
	{
		word[i] = s[beg];
		i++;
		beg++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	beg;
	size_t	k;
	size_t	words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i] && k < words)
	{
		while (s[i] && s[i] == c)
			i++;
		beg = i;
		while (s[i] && s[i] != c)
			i++;
		res[k++] = ft_dup(s, beg, i);
	}
	res[k] = NULL;
	return (res);
}
/*int	main(void)
{
	const char *str1 = "butterfliesflies";
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