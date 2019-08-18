/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:59:35 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/14 21:50:24 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dp;
	char	*sp;

	if (!dst && !src)
		return (NULL);
	if (!dst || !src)
		src = 0x0;
	dp = (char *)dst;
	sp = (char *)src;
	while (n--)
	{
		*dp++ = *sp++;
	}
	return (dst);
}
