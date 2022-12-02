#include "ft_printf.h"

void ft_str(const char *s, int *count)

{
	int i;
	
	i = 0;
	if (!s)
	{
		write(1,"(null)",6);
		*count += 6;
	}
	else 
	{
		while(s[i])
		{
			write(1,&s[i],1);
			*count += 1;
			i++;
		}
	}
}
