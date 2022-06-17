/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:24:36 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/17 16:20:58 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_putnbr(int n)
{
	unsigned long int	nb;
	size_t	count;
	char	*base;

	count = 0;
	base = "0123456789";
	if (n == -2147483648)
		return (count += write(1, "-2147483648", 11));
	else if (n < 0)
	{
		ft_putchar('-');
		count++;
		n *= -1;
	}
	nb = n;
	if (nb < 10)
		count += write(1, &base[nb % 10], 1);
	if (nb >= 10)
	{
		count += ft_putnbr(nb / 10);
		count += write(1, &base[nb % 10], 1);
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
