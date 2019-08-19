#include "liblist.h"

void list_add_node_last(t_list **list, t_list *node)
{
    t_list *tmp;
    if (list && *list && node)
    {
        tmp = *list;
        while (tmp->next)
            tmp = tmp->next;
        tmp->next = node;
    }
}