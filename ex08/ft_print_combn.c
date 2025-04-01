#include <unistd.h>

void	ft_print_combn(int n)
{
	char	arr[9];
	char	c;
	int		i;
	int		j;

	i = -1;
	while (++i < n)
		arr[i] = i;
	i = -1;
	while (++i < n)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
	}
	while (1)
	{
		j = n - 1;
		while (j >= 0 && arr[j] == 10 - n + j)
			j--;
		if (j < 0)
			return ;
		arr[j]++;
		i = j;
		while (++i < n)
			arr[i] = arr[i - 1] + 1;
		write(1, ", ", 2);
		i = -1;
		while (++i < n)
		{
			c = arr[i] + '0';
			write(1, &c, 1);
		}
	}
}
