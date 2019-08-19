#include "liblist.h"
#include "../libft/libft.h"

void print_list(t_list *list)
{
    while(list)
    {
        ft_putnbr(list->data);
        ft_nl();
        list = list->next;
    }
    ft_nl();

}