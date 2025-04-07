#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	int	x;

	x = 24;
	ft_is_negative(x);
	return (0);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
