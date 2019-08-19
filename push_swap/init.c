#include "push_swap.h"

void init(char **av, t_list **list, int size)
{
    int tmp_array[size];
    int array[size];
    int i;

    i = 0;
    while (i < size)
        tmp_array[i++] = ft_atoi(*av++);
    i = 0;
    while (i < size)
    {
        array[i] = tmp_array[i];
        i++;
    }
    print_array(tmp_array, size);
    sort_array(tmp_array, size);
    scramble(array, tmp_array, size);
    print_array(array, size);
    array_to_list(array, size, list);
}

static void scramble(int a[], int s[], int size)
{
    int array[size];
    int i;
    int j;
    int v;
    
    i = 0;
    while (i < size)
    {
        j = 0;
        v = s[i];
        while (a[j] != v)
            j++;
        array[j] = i;
        i++;
    }
    i = 0;
    while (i < size)
    {
        a[i] = array[i];
        i++;
    }
}
