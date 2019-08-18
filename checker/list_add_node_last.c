#include "checker.h"

void list_add_node_last(t_list **list, t_list *node)
{
    if (list && *list && node)
    {
        while ((*list)->next)
            (*list) = (*list)->next;
        (*list)->next = node;
    }
}