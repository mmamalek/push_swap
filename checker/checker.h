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
# include "../liblist/liblist.h"
# include "../libft/libft.h"

void			read_list(char **numbers, t_list **list);


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
void			print_ab(t_list *a, t_list *b);
#endif