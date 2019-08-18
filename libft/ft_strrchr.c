/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:50:17 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/15 00:48:14 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	cptr;

	if (s == NULL)
		s = 0x0;
	i = ft_strlen(s);
	cptr = (char)c;
	if (cptr == '\0')
		return ((char *)s + i);
	while (i != 0)
	{
		if (*(s + i) == cptr)
			return ((char *)s + i);
		i--;
	}
	if (s[i] == cptr)
		return ((char *)&s[i]);
	return (NULL);
}
