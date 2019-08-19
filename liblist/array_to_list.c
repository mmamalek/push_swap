#include "liblist.h"

void array_to_list(int a[], int asize, t_list **list)
{
    int i;
    t_list *head;

    i = 0;
    head = list_new_node(a[i++]);
    while (i < asize)
    {
        list_add_node_last(&head, list_new_node(a[i++]));
    }
    *list = head;
}