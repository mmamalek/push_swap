/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:07:28 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/19 17:56:03 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *tmp;

	if (!lst)
		return (NULL);
	else
	{
		tmp = f(lst);
		new = ft_lstnew(tmp->content, tmp->content_size);
		if (!new)
			return (NULL);
		while (lst->next)
		{
			ft_lstaddlast(&new, f(lst->next));
			lst = lst->next;
		}
	}
	return (new);
}
