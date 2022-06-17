/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 18:49:44 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/17 14:15:04 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_print_str(va_list arg, const char *str, int i)
{
	char	*s;
	size_t	count;

	count = 0;
	if (str[i] == 's')
	{
		s = va_arg(arg, char *);
		if (s == NULL)
		{
			count = ft_putstr("(null)");
			return (count);
		}
		else
			count = ft_putstr(s);
	}
	return (count);
}

