#include "checker.h"

void	list_del_node(t_list **node)
{
    if (node && *node)
    {
        free (*node);
        *node = NULL;
    }
}