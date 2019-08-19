#include "checker.h"
#include "../libft/libft.h"
#include "../get_next_line/get_next_line.h"

static void    perform_task(char *op, t_list **stack_a,t_list **stack_b);

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
            get_next_line(STDIN_FILENO, &input);
            if (ft_strequ(input, "quit") || ft_strequ(input, "done"))
                break;
            else
                perform_task(input, &stack_a, &stack_b);
            input = NULL;
        }
        //run_last_test(stack_a, stack_b, av);
    }
    return (0);
}

static void    perform_task(char *op, t_list **stack_a,t_list **stack_b)
{
    if (ft_strequ(op, "sa"))
        sa(stack_a);
    if (ft_strequ(op, "sb"))
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

void			ss(t_list **stack_a, t_list **stack_b)
{
    sa(stack_a);
    sb(stack_b);
}

void			rr(t_list **stack_a, t_list **stack_b)
{
    ra(stack_a);
    rb(stack_b);
}

void			rrr(t_list **stack_a, t_list **stack_b)
{
    rra(stack_a);
    rrb(stack_b);
}

void			pa(t_list **a, t_list **b)
{
    t_list *tmp;
    if (a && b && *b)
    {
        tmp = *b;
        if (!*a)
            *a = list_new_node(tmp->data);
        else
            list_add_node_start(a, list_new_node(tmp->data));
        list_delete_top(b);
    }
}

void			pb(t_list **a, t_list **b)
{
    t_list *tmp;
    if (a && *a && b)
    {
        tmp = *a;
        if (!*b)
            (*b) = list_new_node(tmp->data);
        else
            list_add_node_start(b, list_new_node(tmp->data));
        list_delete_top(a);
    }
}