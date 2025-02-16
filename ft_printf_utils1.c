/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtonosak <mtonosak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 09:12:13 by mtonosak          #+#    #+#             */
/*   Updated: 2024/11/30 09:15:10 by mtonosak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	len;
	int	ret;

	len = 0;
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		ret = ft_putchar(*str);
		if (ret == -1)
			return (-1);
		len = len + ret;
		str++;
	}
	return (len);
}

int	ft_putnbr(int n)
{
	char	c;
	int		len;
	int		ret;

	len = 0;
	if (n == INT_MIN)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		len = len + ft_putstr("-");
		n = -n;
	}
	if (n > 9)
		len = len + ft_putnbr(n / 10);
	c = (n % 10) + '0';
	ret = ft_putchar(c);
	if (ret == -1)
		return (-1);
	len = len + ret;
	return (len);
}
