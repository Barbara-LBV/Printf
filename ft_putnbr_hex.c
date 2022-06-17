/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:24:36 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/17 16:36:28 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_putnbr_hex(unsigned long long int nb, char *base)
{
	size_t	count;

	count = 0;
	if (nb < 16)
		count = write(1, &base[nb % 16], 1);
	else if (nb >= 16)
	{
		count += ft_putnbr_hex(nb / 16, base);
		count += write(1, &base[nb % 16], 1);
	}
	return (count);
}

/*int main()
{
	size_t count;

	count = ft_putnbr(15);
	printf("\n%ld", count);
	ft_putnbr_base(16, base1);
	printf("\n");
	ft_putnbr_base(-2147483648, base1);
	printf("\n");
	ft_putnbr_base(2147483649, base2);
	printf("\n");
	return (0);
}*/
