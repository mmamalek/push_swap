/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:06:20 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/12 07:06:56 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	size_t i;

	i = 0;
	if (s)
		while (s[i])
			ft_putchar_fd(s[i++], fd);
	ft_putchar_fd('\n', fd);
}
