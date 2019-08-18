#include "checker.h"

void	list_del_node(t_list **node)
{
    t_list *tmp;
    if (node && *node)
    {
        tmp = *node;
        free(tmp);
        (*node) = NULL;
    }
}