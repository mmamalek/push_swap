/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmamalek <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 09:37:13 by mmamalek          #+#    #+#             */
/*   Updated: 2019/08/18 10:45:18 by mmamalek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../libft/libft.h"

typedef struct int_list
{
	int		data;
	struct list *next;
	struct list *prev;
}				t_int_list;

t_int_list		new_int_node(int data);
void			del_int_node(t_int_list **node);
void			del_int_list(t_int_list **list);

#endif


