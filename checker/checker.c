#include "checker.h"
#include "../libft/libft.h"
#include "../get_next_line/get_next_line.h"

static void    perform_task(char *op, t_list **stack_a,t_list **stack_b);
static void	run_last_test(t_list **a, t_list **b, char **arguments);

int main(int ac, char **av)
{
    t_list *stack_a;
    t_list *stack_b;
    char    *input;

    stack_b = NULL;
    if (ac > 1)
    {
        read_list(++av, &stack_a);
        while (1)
        {
            if (!get_next_line(STDIN_FILENO, &input))
				break ;
            if (ft_strequ(input, "quit") || ft_strequ(input, "done"))
                break;
            else
                perform_task(input, &stack_a, &stack_b);
            input = NULL;
        }
        run_last_test(&stack_a, &stack_b, av);
    }
    return (0);
}

static void    perform_task(char *op, t_list **stack_a,t_list **stack_b)
{
    if (ft_strequ(op, "sa"))
        sa(stack_a);
	else if (ft_strequ(op, "sb"))
        sb(stack_b);
    if (ft_strequ(op, "ss"))
        ss(stack_a, stack_b);
    if (ft_strequ(op, "pa"))
        pa(stack_a, stack_b);
    if (ft_strequ(op, "pb"))
        pb(stack_a, stack_b);
    if (ft_strequ(op, "ra"))
        ra(stack_a);
    if (ft_strequ(op, "rb"))
        rb(stack_b);
    if (ft_strequ(op, "rr"))
        rr(stack_a, stack_b);
    if (ft_strequ(op, "rra"))
        rra(stack_a);
    if (ft_strequ(op, "rrb"))
        rrb(stack_b);
    if (ft_strequ(op, "rrb"))
       rrr(stack_a, stack_b);
    if (ft_strequ(op, "p") || ft_strequ(op, "print") || ft_strequ(op, "ls"))
        print_ab(*stack_a, *stack_b);
}

static void	run_last_test(t_list **a, t_list **b, char **arguments)
{
	int argc;

	argc = 0;
	if (!*b)
	{
		while (*arguments++)
			argc++;
		if (list_len(*a) == argc && list_is_ascending(*a))
			ft_putendl("OK");
		else
			ft_putendl("KO");
	}
	else
		ft_putendl("KO");
	list_delete(a);
	list_delete(b);
}
