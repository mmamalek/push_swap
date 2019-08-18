/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 07:18:04 by mmamalek          #+#    #+#             */
/*   Updated: 2019/06/19 08:03:03 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list) * 1);
	if (!head)
		return (NULL);
	if (content)
	{
		head->content = malloc(content_size);
		if (!head->content)
			return (NULL);
		ft_memmove(head->content, content, content_size);
		head->content_size = content_size;
	}
	else
	{
		head->content = NULL;
		head->content_size = 0;
	}
	head->next = NULL;
	return (head);
}
