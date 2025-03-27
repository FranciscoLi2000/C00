#include <unistd.h>
#define INT_MIN -2147483648 /* 定义一个符号常量 */

void	ft_putnbr(int nb)
{
	int	num;

	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10); /* 递归处理高位 */
	else
	{
		num = nb % 10 + '0'; /* 将低位转换为字符方便输出 */
		write(1, &num, 1);
	}
}
