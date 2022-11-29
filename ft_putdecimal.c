#include "printf.h"
static void ft_putchar(char c)
{
	write(1,&c,1);
}
void	ft_putdecimal(int n ,)

{
	if (n <= -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (n >= 0 && n <= 9)
			ft_putchar(n + 48);
		else if (n >= 10)
		{
			ft_putdecimal(n / 10);
			ft_putchar(n % 10 + 48);
		}
		else
		{
			write(1, "-", 1);
			ft_putdecimal(n * -1);
		}
	}
}

