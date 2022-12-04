/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:17:13 by oredoine          #+#    #+#             */
/*   Updated: 2022/12/04 19:11:23 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void wich_type(char c, va_list arg, int *count)

{
    if ( c == 'c')
         ft_char(va_arg(arg, int), count);
    else if (c == 's')
        ft_str(va_arg(arg,const char *), count);
    else if (c == 'p')
    {
        write(1,"0x",2);
        *count += 2;
        ft_ulong(va_arg(arg, unsigned long), c, count);
    }
        
    else if (c == 'd' || c =='i')
         ft_integer(va_arg(arg, int),"0123456789", count);
    else if (c == 'u' || c == 'x' || c == 'X')
         ft_puthexa(va_arg(arg, unsigned int), c, count);
    else if (c == '%')
    {
        write(1,"%",1);
        *count += 1;
    }

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
// int	main()
// {
// 	char *ptr = "oredoine";
// 	int		i = -10;
// 	unsigned int ui = 4294967295;
// 	int x = 0;

// 	printf("character: %c pointer in hexa: %p string pointed to: %s decimal: %d %i unsigned decimal: %u hexadecimal : %x heXadecimal : %X \n", 'X', ptr, ptr, i, i, ui, x, x);
// 	ft_printf("character: %c pointer in hexa: %p string pointed to: %s decimal: %d %i unsigned decimal: %u hexadecimal : %x heXadecimal : %X \n", 'X', ptr, ptr, i, i, ui, x, x);

// }