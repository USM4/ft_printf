/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:32:51 by oredoine          #+#    #+#             */
/*   Updated: 2022/12/02 20:28:25 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	ft_integer(long nbr, char c, int *count)

{
    long n; 
    char *base_type;
    
    base_type = "0123456789";
    n = 10;
	if (nbr < -2147483647)
	{
		write(1,"-2147483648",11);
		*count += 11;
	}
	else if (nbr < 0)
	{
		nbr = -nbr;
		write(1,"-",1);
		*count += 1;
        // ft_integer(nbr, c, count);
	}
	else if(nbr >= n)
	{
		ft_integer(nbr / n, c, count);
		ft_integer(nbr % n, c, count);
	}
	else 
	{
		write(1,&base_type[nbr],1);
		*count += 1;
	}
}