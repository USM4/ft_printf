#include "ft_printf.h"

static  int ft_strlen(const char *p)
{
	int	i;

	i = 0;
	while (*(p + i) != '\0')
		i++;
	return (i);
}

void	ft_ulong(unsigned long nbr, char c, int *count)

{
	char *base_type;
    unsigned long n; 
		if(c == 'p')
			base_type = "0123456789abcdef";
        else if(c == 'd' || c == 'i')
			base_type = "0123456789";
        n = ft_strlen(base_type);
		if (nbr >= n)
		{
			ft_ulong(nbr / n, c, count);
			ft_ulong(nbr % n, c, count);
		}
		else 
		{
			write(1,&base_type[nbr],1);
			*count += 1;
		}

}