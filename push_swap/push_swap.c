#include "push_swap.h"

void	bring_min_to_top(int min, int max, t_list **list)
{
	max = 0;
	if (*list)
	{
		while ((*list)->data != min)
		{
			rotate_up(list);
			ft_putendl("ra");
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
		print_ab(stack_a, stack_b);

		
	}
    
    return (0);
}
