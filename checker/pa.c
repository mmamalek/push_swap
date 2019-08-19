#include "checker.h"

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