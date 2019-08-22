/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_is_ascending.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 06:59:49 by mmamalek          #+#    #+#             */
/*   Updated: 2019/08/22 07:06:08 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblist.h"

int	list_is_ascending(t_list *list)
{
	if (list)
	{
		if (list->next)
		{
			while (list->next)
			{
				if (list->data > list->next->data)
					return (0);
				list = list->next;
			}
			return (1);
		}
		else
			return (1);
	}
	return (0);
}
