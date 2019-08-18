#include "checker.h"

void list_add_node_start(t_list **list, t_list *node)
{
    if (list && *list && node)
    {
        node->next = *list;
        list = &node;
    }
}