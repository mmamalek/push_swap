#include "checker.h"

void	list_delete_top(t_list **top)
{
    t_list *second;

    if (top && *top)
    {
        second = (*top)->next;
        list_del_node(top);
        *top = second;
    }
}