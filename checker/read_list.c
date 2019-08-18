#include "checker.h"
#include "../libft/libft.h"

void	read_list(char **numbers, t_list **head)
{
    int data;
    t_list *list;

    list = NULL;
    if (numbers && *numbers)
    {
        data = ft_atoi(*numbers++);
        list = list_new_node(data);
        while (*numbers)
        {
            data = ft_atoi(*numbers++);
            list_add_node_last(&list, list_new_node(data));
        }
    }
    *head = list;
}