/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtonosak <mtonosak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:12:33 by mtonosak          #+#    #+#             */
/*   Updated: 2024/11/30 16:21:10 by mtonosak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long value, int lowercase)
{
	char	*hex_num;
	int		i;
	char	buffer[17];

	if (lowercase)
		hex_num = "0123456789abcdef";
	else
		hex_num = "0123456789ABCDEF";
	i = 16;
	buffer[i--] = '\0';
	if (value == 0)
		buffer[i--] = '0';
	else
	{
		while (value > 0)
		{
			buffer[i--] = hex_num[value % 16];
			value = value / 16;
		}
	}
	if (ft_putstr(&buffer[i + 1]) == -1)
		return (-1);
	return (16 - i - 1);
}

int	ft_print_ptr(void *ptr)
{
	int	len;
	int	hex_len;

	len = 0;
	if (ptr == NULL)
	{
		if (ft_putstr("(nil)") == -1)
			return (-1);
		return (5);
	}
	if (ft_putstr("0x") == -1)
		return (-1);
	len = len + 2;
	hex_len = ft_print_hex((unsigned long)ptr, 1);
	if (hex_len == -1)
		return (-1);
	len = len + hex_len;
	return (len);
}

int	ft_print_un(unsigned int n)
{
	char	c;
	int		len;
	int		ret;

	len = 0;
	if (n >= 10)
		len = len + ft_print_un(n / 10);
	if (len == -1)
		return (-1);
	c = (n % 10) + '0';
	ret = ft_putchar(c);
	if (ret == -1)
		return (-1);
	len = len + ret;
	return (len);
}
