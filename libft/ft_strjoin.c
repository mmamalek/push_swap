/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:41:06 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/15 03:49:39 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	char	*m;

	if (s1 && s2)
	{
		len1 = ft_strlen(s1);
		len2 = ft_strlen(s2);
		m = (char *)ft_memalloc(len1 + len2 + 1);
		if (m == NULL)
			return (NULL);
		ft_strcpy(m, s1);
		ft_strcat(m, s2);
		return (m);
	}
	return (NULL);
}
