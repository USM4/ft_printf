#include "printf.h"

void ft_char(char c, int *count)
{
        write(1,&c,1);
        *count += 1;
}
