#include "ft_printf.h"

static	int	ft_strlen(const char *p)
{
	int	i;

	i = 0;
	while (*(p + i) != '\0')
		i++;
	return (i);
}
void	ft_puthexa(unsigned int nbr, char c, int *count)

{
	char *base_type;
	unsigned int n ;

	n = 0;
		if(c == 'u')
			base_type = "0123456789";
		else if(c == 'X')
			base_type = "0123456789ABCDEF";
		else if(c == 'x' || c == 'p')
			base_type = "0123456789abcdef";
		n = ft_strlen(base_type);
		if (nbr >= n)
		{
			ft_puthexa(nbr / n, c, count);
			ft_puthexa(nbr % n, c, count);
		}
		else 
		{
			write(1,&base_type[nbr],1);
			*count += 1;
		}

}

