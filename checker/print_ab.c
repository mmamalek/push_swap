#include "checker.h"
#include "../libft/libft.h"

void print_ab(t_list *a, t_list *b)
{
    int la;
    int lb;

    la = list_len(a);
    lb = list_len(b);

    while (la > lb)
    {
        la--;
        ft_putstr("  ");
        ft_putnbr(a->data);
        ft_putendl("\t");
        a = a->next;
    }
    while (la < lb)
    {
        lb--;
        ft_putstr("  \t  ");
        ft_putnbr(b->data);
        ft_putchar('\n');
        b = b->next;
    }
    while (a)
    {
        ft_putstr("  ");
        ft_putnbr(a->data);
        ft_putstr("\t  ");
        ft_putnbr(b->data);
        ft_putchar('\n');
        a = a->next;
        b = b->next;
    }
    ft_putendl("stack_a stack_b");
}