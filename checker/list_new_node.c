#include "checker.h"

t_list  *list_new_node(int data)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    if (node)
    {
        node->data = data;
        node->next = NULL;
        return (node);
    }
    return (NULL);
}