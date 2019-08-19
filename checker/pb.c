#include "checker.c"

void			pb(t_list **a, t_list **b)
{
    t_list *tmp;
    if (a && *a && b)
    {
        tmp = *a;
        if (!*b)
            (*b) = list_new_node(tmp->data);
        else
            list_add_node_start(b, list_new_node(tmp->data));
        list_delete_top(a);
    }
}
