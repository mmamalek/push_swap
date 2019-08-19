void sort_array(int a[], int size)
{
    int i;
    int j;
    int tmp;

    i = 0;
    j = 0;
    while (i < size)
    {
        while (j < size - 1)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
            j++;
        }
        i++;
        j = 0;
    }
}