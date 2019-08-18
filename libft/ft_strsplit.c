/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 14:08:25 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/18 11:29:02 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *s, char sep)
{
	size_t	num;

	num = 0;
	while (*s)
	{
		while (*s == sep)
			s++;
		if (*s && *s != sep)
		{
			num++;
			while (*s != sep && *s)
				s++;
		}
	}
	return (num);
}

static size_t	chrcount(char const *s, char const c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**matrix;
	size_t	i;
	size_t	j;
	size_t	chrs;

	if (s)
	{
		j = 0;
		i = wordcount(s, c);
		matrix = (char **)malloc(sizeof(char *) * (i + 1));
		if (!matrix)
			return (NULL);
		while (i--)
		{
			while (*s == c)
				s++;
			chrs = chrcount(s, c);
			*(matrix + j++) = ft_strsub(s, 0, chrs);
			s += chrs;
		}
		*(matrix + j) = NULL;
		return (matrix);
	}
	return (NULL);
}
