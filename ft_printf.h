/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:06:22 by oredoine          #+#    #+#             */
/*   Updated: 2023/01/07 22:20:21 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<unistd.h>
# include<stdio.h>
# include<stdarg.h>

int		ft_printf(const char *s, ...);
void	ft_char(char c, int *count);
void	ft_str(const char *s, int *count);
void	ft_puthexa(unsigned int nbr, char c, int *count);
void	ft_ulong(unsigned long nbr, char c, int *count);
void	ft_integer(long nbr, char *base, int *count);
#endif
