void print_array(int a[], int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        ft_putnbr(a[i++]);
        ft_putchar(' ');
    }
    ft_putchar('\n');
}