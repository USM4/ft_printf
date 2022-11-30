#include "printf.h"

void ft_str(const char *s, int *count)

{
	int i;
	
	i = 0;
	if (s)
	{
	while(s[i])
	{
		write(1,&s[i],1);
		*count += 1;
		i++;
	}
	}
	else 
	{
		write(1,"(null)",6);
		*count += 6;
	}
}
