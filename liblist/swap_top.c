#include "liblist.h"

void    swap_top(t_list **top)
{
    t_list *first;
    t_list *second;

    if (top && *top)
    {
        first = (*top);
        second = first->next;
        first->next = second->next;
        second->next = first;
        *top = second;
    }
}