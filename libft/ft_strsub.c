/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 17:23:36 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/15 05:20:50 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (s)
	{
		sub = (char *)ft_memalloc(sizeof(char) * (len + 1));
		if (sub == NULL)
			return (NULL);
		ft_strncpy(sub, s + start, len);
		return (sub);
	}
	return (NULL);
}
