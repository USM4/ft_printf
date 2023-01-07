/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:36:24 by oredoine          #+#    #+#             */
/*   Updated: 2023/01/07 22:20:25 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_str(const char *s, int *count)

{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		*count += 6;
	}
	else
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			*count += 1;
			i++;
		}
	}
}
