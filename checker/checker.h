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
# include <unistd.h>
# include <stdlib.h>

typedef struct list
{
	int			data;
	struct list *next;
}				t_list;

t_list			*list_new_node(int data);
void			list_del_node(t_list **node);
void			list_delete(t_list **list);
void			list_add_node_start(t_list **list, t_list *node);
void			list_add_node_last(t_list **list, t_list *node);
void			print_list(t_list *list);
void			list_delete_top(t_list **top);

void			swap_top(t_list **top);
void			rotate_up(t_list **head);
void			rotate_down(t_list **head);

void			read_list(char **numbers, t_list **list);
void		    perform_task(char *input,t_list **stack_a, t_list **stack_b);


void			sa(t_list **stack_a);
void			sb(t_list **stack_b);
void			ss(t_list **stack_a, t_list **stack_b);
void			pa(t_list **stack_a, t_list **stack_b);
void			pb(t_list **stack_a, t_list **stack_b);
void			ra(t_list **stack_a);
void			rb(t_list **stack_b);
void			rr(t_list **stack_a, t_list **stack_b);
void			rra (t_list **stack_a);
void			rrb (t_list **stack_b);
void			rrr(t_list **stack_a, t_list **stack_b);


#define	sa(a)	swap_top(a);
#define	sb(b)	swap_top(b);

void			ss(t_list **stack_a, t_list **stack_b);
void			pa(t_list **stack_a, t_list **stack_b);
void			pb(t_list **stack_a, t_list **stack_b);
#define ra(b)	rotate_up(b);
#define rb(b)	rotate_up(b);

void			rr(t_list **stack_a, t_list **stack_b);

#define rra(x)	rotate_down(x);
#define rrb(x)	rotate_down(x);

void			rrr(t_list **stack_a, t_list **stack_b);
#endif