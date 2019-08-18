/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 08:38:33 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/19 12:14:56 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	tmp;

	tmp = **alst;
	if (tmp.next)
		ft_lstdel(&tmp.next, del);
	ft_lstdelone(alst, del);
}
