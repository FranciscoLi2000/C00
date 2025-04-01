#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	c;

	c = 122;
	while (c >= 97)
	{
		ft_putchar(c);
		c--;
	}
}
