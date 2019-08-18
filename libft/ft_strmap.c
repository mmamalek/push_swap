/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:26:38 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/15 03:42:28 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*s2;

	if (s)
	{
		i = 0;
		s2 = (char *)ft_memalloc(ft_strlen(s) + 1);
		if (s2 == NULL)
			return (NULL);
		while (*s)
			s2[i++] = f(*s++);
		return (s2);
	}
	return (NULL);
}
