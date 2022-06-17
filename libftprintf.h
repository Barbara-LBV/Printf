/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:10:54 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/17 17:26:15 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBPRINTF_H

//# include "ft_printf.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <stdarg.h>

void	ft_putchar(char c);
size_t	ft_print_char(va_list arg, const char *str, int i);
size_t	ft_print_str(va_list arg, const char *str, int i);
size_t	ft_print_dec(va_list arg, const char *str, int i);
size_t	ft_print_p(va_list arg, const char *str, int i);
size_t	ft_print_u(va_list arg, const char *str, int i);
//size_t	ft_putnbr_u(unsigned int n);
size_t	ft_print_hex(va_list arg, const char *str, int i);
size_t	ft_putstr(char *str);
size_t	ft_putnbr(int n);
size_t	ft_putnbr_u(unsigned long long int n);
char	*ft_itoa_hex(int n, char *base);
char	*ft_itoa_dec(unsigned long long int n);
size_t	ft_putnbr_hex(unsigned long long n, char *base);
size_t	ft_putnbr_ptr(unsigned long long n);
size_t	ft_strlen(const char *s);
int	ft_printf(const char *, ...);

#endif
