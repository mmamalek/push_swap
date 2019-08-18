#include "checker.h"

void	list_delete(t_list **list)
{
    if (list && *list)
    {
        while ((*list)->next)
            list_delete(&(*list)->next);
        list_del_node(list);
    }
}