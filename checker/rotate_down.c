#include "checker.h"

void    rotate_down(t_list **list)
{
    t_list *first;
    t_list *last;
    t_list *second_last;

    if (list && *list && (*list)->next)
    {
        first = *list;
        second_last = first;
        while (second_last->next->next)
            second_last = second_last->next;
        last = second_last->next;
        second_last->next = NULL;
        last->next = first;
        *list = last;
    }
}