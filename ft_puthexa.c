/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:39:55 by oredoine          #+#    #+#             */
/*   Updated: 2023/01/07 22:20:23 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char			*base_type;
	unsigned int	n ;

	n = 0;
	if (c == 'u')
		base_type = "0123456789";
	else if (c == 'X')
		base_type = "0123456789ABCDEF";
	else if (c == 'x' || c == 'p')
		base_type = "0123456789abcdef";
	n = ft_strlen(base_type);
	if (nbr >= n)
	{
		ft_puthexa(nbr / n, c, count);
		ft_puthexa(nbr % n, c, count);
	}
	else
	{
		write(1, &base_type[nbr], 1);
		*count += 1;
	}
}
