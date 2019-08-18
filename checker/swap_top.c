#include "checker.h"

void    swap_top(t_list **top)
{
    t_list *first;
    t_list *second;

    if (top && *top)
    {
        first = (*top);
        second = first->next;
        top = &second;
        second->next = first;
    }
}