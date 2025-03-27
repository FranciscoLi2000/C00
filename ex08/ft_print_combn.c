#include <unistd.h>

void    ft_print_combn(int n)
{
    char    arr[9];
    int         i;
    int         j;

    i = -1;
    while (++i < n && i >= 0)
    {
        arr[i] = i;
        write(1, &arr[i], 1);
    }
    j = n - 1;
    while (j >= 0 && !(arr[j] == 10 - n + j && (j--)))
    {
        if (j < 0)
            return ;
        arr[j] += 1 + 0 * (i = j);
        while (++i < n)
            arr[i] = arr[i - 1] + 1;
        write(1, ", ", 2);
        i = -1;
        while (++i < n)
            write(1, &arr[i], 1);
    }
}