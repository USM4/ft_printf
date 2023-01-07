/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulong.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:32:05 by oredoine          #+#    #+#             */
/*   Updated: 2023/01/07 22:20:26 by oredoine         ###   ########.fr       */
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

void	ft_ulong(unsigned long nbr, char c, int *count)

{
	char			*base_type;
	unsigned long	n;

	if (c == 'p')
		base_type = "0123456789abcdef";
	else if (c == 'd' || c == 'i')
		base_type = "0123456789";
	n = ft_strlen(base_type);
	if (nbr >= n)
	{
		ft_ulong(nbr / n, c, count);
		ft_ulong(nbr % n, c, count);
	}
	else
	{
		write(1, &base_type[nbr], 1);
		*count += 1;
	}
}
