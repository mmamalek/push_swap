#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *list;

    init(++av, &list, ac - 1);
    print_list(list);
    return (0);
}