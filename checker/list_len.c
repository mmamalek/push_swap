#include "checker.h"

int list_len(t_list *list)
{
    int len;

    len = 0;
    while(list)
    {
        list = list->next;
        len++;
    }
    return (len);
}