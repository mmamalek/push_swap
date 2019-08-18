/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:18:57 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/14 20:46:54 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dp;
	unsigned char	*sp;

	if (!dst || !src)
		src = 0x0;
	if (n == 0)
		return (NULL);
	dp = (unsigned char *)dst;
	sp = (unsigned char *)src;
	while (n--)
	{
		*dp = *sp;
		dp++;
		if (*sp == (unsigned char)c)
		{
			return (dp);
		}
		sp++;
	}
	return (NULL);
}
