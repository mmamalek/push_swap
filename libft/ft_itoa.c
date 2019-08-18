/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 15:21:25 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/15 05:23:08 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int len;

	len = 1;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	char	*num;
	int		len;

	if (n == (-2147483648))
	{
		num = ft_strdup("-2147483648");
		return (num);
	}
	len = length(n);
	num = (char *)ft_memalloc(len + 1);
	if (num == NULL)
		return (NULL);
	num[len--] = '\0';
	if (n < 0)
	{
		n = -n;
		num[0] = '-';
	}
	while (n >= 10)
	{
		num[len--] = (n % 10) + '0';
		n = n / 10;
	}
	num[len] = n + '0';
	return (num);
}
