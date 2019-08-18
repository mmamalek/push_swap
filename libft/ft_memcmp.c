/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:00:11 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/14 23:18:40 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sp1;
	unsigned char	*sp2;

	if (n == 0 || s1 == s2)
		return (0);
	sp1 = (unsigned char *)s1;
	sp2 = (unsigned char *)s2;
	while (n--)
	{
		if (*sp1 != *sp2)
			return (*sp1 - *sp2);
		sp1++;
		sp2++;
	}
	return (0);
}
