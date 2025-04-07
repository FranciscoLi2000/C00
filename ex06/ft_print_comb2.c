#include <stdio.h>

void	ft_print_comb2(void);

int	main(void)
{
	ft_print_comb2();
	printf("\n");
	return (0);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			putchar(' ');
			putchar(y / 10 + '0');
			putchar(y % 10 + '0');
			if (!(x == 98 && y == 99))
				printf(", ");
			y++;
		}
		x++;
	}
}
