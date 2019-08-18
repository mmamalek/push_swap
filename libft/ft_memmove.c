/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:15:35 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/14 23:09:59 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dp;
	unsigned char *sp;

	if (!dst && !src)
		return (NULL);
	if (!dst || !src)
		src = 0x0;
	if (dst <= src)
	{
		dp = (unsigned char *)(dst);
		sp = (unsigned char *)(src);
		while (len--)
			*dp++ = *sp++;
	}
	else
	{
		dp = (unsigned char *)(dst + len - 1);
		sp = (unsigned char *)(src + len - 1);
		while (len--)
			*dp-- = *sp--;
	}
	return ((unsigned char *)dst);
}
