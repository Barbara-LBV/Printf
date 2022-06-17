/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_dec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blefebvr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 16:21:26 by blefebvr          #+#    #+#             */
/*   Updated: 2022/06/17 16:12:24 by blefebvr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static unsigned int	ft_intlen(int n)
{
	unsigned int	len;
	long			nb;

	len = 0;
	nb = (long) n;
	if (nb == 0)
		len = 1;
	if (nb < 0)
	{
		len++;
		nb *= -1;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

static unsigned char	*ft_reverse(const char *str)
{
	unsigned int	i;
	unsigned int	j;
	unsigned char	*res;
	char			tmp;

	res = (unsigned char *)str;
	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = res[i];
		res[i] = res[j];
		res[j] = tmp;
		i++;
		j--;
	}
	res[ft_strlen(str)] = '\0';
	return (res);
}

static char	*ft_malloc(int n)
{
	unsigned int	size;
	char			*res;

	size = ft_intlen(n);
	res = malloc(sizeof(char) * size + 1);
	if (res == NULL)
		return (NULL);
	return (res);
}

char	*ft_itoa_dec(unsigned long long int nb)
{
	char			*convert_to_char;
	unsigned int	i;
	unsigned int	size;

	size = ft_intlen(nb);
	i = 0;
	convert_to_char = ft_malloc(nb);
	if (nb == 0)
		convert_to_char[0] = '0';
	while (nb > 0)
	{
		convert_to_char[i++] = nb % 10 + '0';
		nb /= 10;
	}
	convert_to_char[size] = '\0';
	ft_reverse((const char *)convert_to_char);
	return (convert_to_char);
}

/*int main ()
{
	int n = -10;
	char *res;
	res = ft_itoa_dec(n, "0123456789");
	printf("%s\n", res);
	free(res);
	return (0);
}*/