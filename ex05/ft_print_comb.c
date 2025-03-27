#include <unistd.h>

void	ft_print_comb(void)
{
	int arr[3];

	arr[0] = 48;
	while (arr[0] <= 55)
	{
		arr[1] = arr[0] + 1;
		while (arr[1] <= 56)
		{
			arr[2] = arr[1] + 1;
			while (arr[2] <= 57)
			{
				write(1, &"0123456789"[arr[0]], 1);
				write(1, &"0123456789"[arr[1]], 1);
				write(1, &"0123456789"[arr[2]], 1);
				if (!(arr[0] == 7 && arr[1] == 8 && arr[2] == 9))
					write(1, ", ", 2);
				arr[2]++;
			}
			arr[1]++;
		}
		arr[0]++;
	}
}