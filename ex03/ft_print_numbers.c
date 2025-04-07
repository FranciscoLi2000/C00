#include <unistd.h>

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}

void	ft_print_numbers(void)
{
	int	c;

	c = 48;
	while (c <= 57)
	{
		ft_putchar(c);
		c++;
	}
}
