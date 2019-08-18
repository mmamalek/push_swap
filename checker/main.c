#include "checker.h"

int main(void)
{
    t_list *lst;

    lst = list_new_node(23);
    list_add_node_start(&lst, list_new_node(22));
    list_add_node_start(&lst, list_new_node(30));
    list_add_node_last(&lst, list_new_node(9));
    list_add_node_last(&lst, list_new_node(5));
    list_add_node_last(&lst, list_new_node(24));
    print_list(lst);
    list_delete_top(&lst);
    print_list(lst);
    ra(&lst);
    print_list(lst);
    rb(&lst);
    print_list(lst);
    rra(&lst);
    print_list(lst);
    rrb(&lst);
    print_list(lst);
    return (0);
}