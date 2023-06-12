/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:55:49 by ccarnot           #+#    #+#             */
/*   Updated: 2023/05/23 19:12:06 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_print_char(va_list ap);
int		ft_print_str(va_list ap);
int		ft_putnbr(int nb);
int		ft_print_int(va_list ap);
int		ft_putnbr_u(unsigned int n);
int		ft_print_uint(va_list ap);
int		ft_putnbr_hexa(unsigned int n, char *base);
int		ft_print_hexa_low(va_list ap);
int		ft_print_hexa_up(va_list ap);
int		ft_print_pointer(va_list ap);
int		ft_readarg(va_list ap, char c);
int		ft_printf(const char *s, ...);
int		ft_putnbr_hexa_ulint(unsigned long int n, char *base);
void	ft_putchar(char c);

#endif
