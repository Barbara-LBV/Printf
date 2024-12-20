/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:42:52 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/17 17:32:55 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_all(va_list arg, const char *str, int i)
{
	unsigned int	j;
	size_t			count;

	j = i + 1;
	if (str[j] == 'c' || str[j] == '%')
		count = ft_print_char(arg, str, j);
	if (str[j] == 's')
		count = ft_print_str(arg, str, j);
	if (str[j] == 'x' || str[j] == 'X')
		count = ft_print_hex(arg, str, j);
	if (str[j] == 'i' || str[j] == 'd')
		count = ft_print_dec(arg, str, j);
	if (str[j] == 'u')
		count = ft_print_u(arg, str, j);
	if (str[j] == 'p')
		count = ft_print_p(arg, str, j);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	unsigned int	i;
	unsigned int	count;
	unsigned int	num_arg;
	va_list			arg;

	i = 0;
	count = 0;
	num_arg = ft_strlen(str);
	va_start(arg, str);
	while (i < num_arg)
	{
		if (str[i] != '%')
		{
			ft_putchar(str[i++]);
			count++;
		}
		else if (str[i] == '%')
		{
			count += ft_print_all(arg, str, i);
			i += 2;
		}
	}
	va_end(arg);
	return (count);
}

/*int main()
{
	//char str[] = "%x";
	//int n = 16;
	//int count;

	//count = ft_printf(str, n);
	ft_printf("\n%d\n", ft_printf("%u", 42));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("%u", 42)); 
	write(1, "***************\n", 16);

	ft_printf("\n%d\n",ft_printf("%u", 0));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("%u", 0)); 
	write(1, "***************\n", 16);

	ft_printf("\n%d\n", ft_printf("%s", "Salut"));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("%s", "Salut")); 
	write(1, "***************\n", 16);

	ft_printf("\n%d\n", ft_printf("%c", 'c'));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("%c", 'c')); 
	write(1, "***************\n", 16);

	ft_printf("\n%d\n", ft_printf("100%%"));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("100%%")); 
	write(1, "***************\n", 16);

	ft_printf("\n%d\n", ft_printf("%u", 4294967295));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("%u", 4294967295)); 
	write(1, "***************\n", 16);

	ft_printf("\n%d\n", ft_printf("%u", -42));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("%u", -42)); 
	write(1, "***************\n", 16);

	ft_printf("\n%d\n", ft_printf("%u", 2147483647));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("%u", 2147483647)); 
	write(1, "***************\n", 16);

	ft_printf("\n%d\n", ft_printf("%u", -1));
	write(1, "***************\n", 16);
	printf("\n%d\n", printf("%u", -1)); 
	write(1, "***************\n", 16);

return (0);
}*/
