/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:24:36 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/16 11:08:41 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_nbr(const char *str, ...)
{
	int	i;
	//int	j;
	int	num_arg;
	int	nb;
	int	count;
	va_list	arg;

	i = 0;
	num_arg = ft_strlen(str);
	va_start(arg, str);
	while (i < num_arg)
	{
		if (str[i] != '%')
			ft_putchar(str[i++]);
		else if (str[i] == '%' && str[i + 1] == 'd')
		{
			nb = va_arg(arg, int);
			count = ft_putnbr(nb);
			i += 2;
		}
	}
	va_end(arg);
	return (count);
}

/*int main ()
{
	char str[] = "Ecole %d.\n";
	int nb = 42;
	int n;
	n = ft_print_nbr(str, nb);
	printf("\n%d", n);
	return 0;
}*/
