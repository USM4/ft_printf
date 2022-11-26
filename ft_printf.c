#include "printf.h"

int ft_printf(const char *s, ...)
{
    int i;
    i = 0;

    while (s[i])
    {
        if(s[i] == '%')
        {
            if(s[i + 1] == 'c')
            {
                    
            }
        }
        i++;
    }
    
}
