/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:37:04 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/15 03:44:01 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		{
			s2[i] = f(i, *s++);
			i++;
		}
		return (s2);
	}
	return (NULL);
}
