#include "checker.h"

void print_list(t_list *list)
{
    while(list)
    {
        ft_putnbr(list->data);
        ft_nl();
        list = list->next;
    }
}