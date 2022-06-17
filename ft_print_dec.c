/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_dec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:49:44 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/17 15:58:27 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_print_dec(va_list arg, const char *str, int i)
{
	int				n;
	unsigned long long int	nb;
	size_t			count;

	count = 0;
	if (str[i] == 'd' || str[i] == 'i')
	{
		n = va_arg(arg, int);
		count = ft_putnbr(n);
	}
	if (str[i] == 'u')
	{
		nb = va_arg(arg, unsigned long long int);
		count = ft_putstr(ft_itoa_dec(nb));
	}
	return (count);
}
