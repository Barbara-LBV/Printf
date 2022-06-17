/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:49:44 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/17 17:05:20 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_print_u(va_list arg, const char *str, int i)
{
	unsigned long long	nb;
	size_t			count;

	count = 0;
	if (str[i] == 'u')
	{
		nb = va_arg(arg, unsigned long long);
		count = ft_putnbr_u(nb);
	}
	return (count);
}
