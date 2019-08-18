/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:30:56 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/20 11:34:16 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t apend_size;
	size_t dstlen;
	size_t srclen;

	if (!dst || !src)
		src = 0x0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstsize == 0 || dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	else
	{
		apend_size = dstsize - ft_strlen(dst) - 1;
		while (*dst)
			dst++;
		while (apend_size--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (dstlen + srclen);
}
