/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 19:32:51 by oredoine          #+#    #+#             */
/*   Updated: 2022/12/04 19:01:19 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static  int ft_strlen(const char *p)
{
	int	i;

	i = 0;
	while (*(p + i) != '\0')
		i++;
	return (i);
}
void	ft_integer(long nbr,char *base, int *count)
{
	int d;
	
	d = ft_strlen(base);
	if( nbr >= 0 && nbr < d )
	{
		write(1,&base[nbr],1);
		*count += 1;
	}
	else if(nbr >= d)
	{
		ft_integer(nbr / d, base, count);
		ft_integer(nbr % d, base, count);
	}
	
	else if (nbr < 0 )
	{
		// nbr = -nbr;
		write(1,"-",1);
		*count += 1;
		ft_integer(-nbr, base, count);
    
	}

}      