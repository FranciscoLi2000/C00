#include "exam_rank02.h"

void ft_print_comb2(void)
{
    int x;
    int y;

    x = 0;
    while (x <= 98)
    {
        y = y + 1;
        while (y <= 99)
        {
            ft_putchar(x / 10 + '0');
            ft_putchar(x % 10 + '0');
            ft_putchar(' ');
            ft_putchar(y / 10 + '0');
            ft_putchar(y % 10 + '0');
            if (!(x == 98 && y == 99))
                    write(1, ", ", 2);
            y++;
        }
        x++;
    }
}