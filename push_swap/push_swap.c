#include "push_swap.h"

int		index_of(int num, t_list *list)
{
	int i;

	if (list)
	{
		i = 0;
		while (list && (list->data != num))
		{
			i++;
			list = list->next;
		}
		if (list->data == num)
			return (i);
	}
	return (-1);
}

void	bring_min_to_top(int min, int max, t_list **list)
{
	int min_position;

	if (*list)
	{
		min_position = index_of(min, *list);
		if ((min_position) <= (max - min + 1) / 2)
			while ((*list)->data != min)
			{
				rotate_up(list);
				ft_putendl("ra");
			}
		else
			while ((*list)->data != min)
			{
				rotate_down(list);
				ft_putendl("rra");
			}
	}
}


void do_push_b(t_list **a, t_list **b, int *min)
{
	pb(a, b);
	ft_putendl("pb");
	(*min)++;
}
void do_push_a(t_list **a, t_list **b, int *min)
{
	pa(a, b);
	ft_putendl("pa");
	(*min)--;
}

void push_all_to_a(t_list **a, t_list **b, int *min)
{
	if (b && *b)
	{
		while (*b)
		{
			do_push_a(a, b, min);
		}
	}
}

int main(int ac, char **av)
{
    t_list *stack_a = NULL;
	t_list *stack_b = NULL;
	int		min_a;
	int		max_a;

	if (ac > 1)
	{
    	init(++av, &stack_a, ac - 1);
		min_a = 0;
		max_a = ac - 2;
	
		while (1)
		{
			if (stack_a->data != min_a)
				bring_min_to_top(min_a, max_a, &stack_a);
			if (list_is_ascending(stack_a))
				break ;
			else
				do_push_b(&stack_a, &stack_b, &min_a);
		}
		push_all_to_a(&stack_a, &stack_b, &min_a);
	//	print_ab(stack_a, stack_b);

		
	}
    
    return (0);
}
