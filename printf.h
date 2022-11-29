/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oredoine <oredoine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:06:22 by oredoine          #+#    #+#             */
/*   Updated: 2022/11/29 18:07:31 by oredoine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include<unistd.h>
#include<stdio.h>
#include<stdarg.h>

int ft_printf(const char *, ...);
void ft_char(char c, int *count);
void ft_str(const char *s, int *count);

#endif
