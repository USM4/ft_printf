/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:17:13 by oredoine          #+#    #+#             */
/*   Updated: 2022/11/29 18:57:12 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void wich_type(char c, va_list arg, int *count)

{
    if ( c == 'c')
         ft_char(va_arg(arg, int), count);
    else if (c == 's')
        ft_str(va_arg(arg,const char *), count);
    // else if (c == 'p')
        
    // else if (c == 'd')
        
    // else if (c == 'i')

    // else if (c == 'u')
            
    // else if (c == 'x')
        
    // else if (c == 'X')

    // else if (c == '%')

}

int ft_printf(const char *s, ...)

{
    int i;
    va_list arg;
    int where_count;
    
    i = 0;
    where_count = 0;
    va_start(arg, s);
    while (s[i])
    {
        if(s[i] == '%')
        {
            i++;
            wich_type(s[i], arg, &where_count);
        }
        else
        {
        write(1,&s[i],1);
        where_count += 1;
        }
        i++;
    }
     va_end(arg);
    return(where_count);
}
int main ()
{

}