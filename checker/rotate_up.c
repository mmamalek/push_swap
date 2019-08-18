#include "checker.h"

void    rotate_up(t_list **head)
{
    t_list *first;
    t_list *second;
    t_list *last;

    if (head && *head && (*head)->next)
    {
        first = *head;
        second = first->next;
        last = second;
        while (last->next)
            last = last->next;
        last->next = first;
        first->next = NULL;
        head = &second;
    }
}