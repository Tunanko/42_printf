/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichippe <ichippe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:12:50 by ichippe           #+#    #+#             */
/*   Updated: 2025/03/16 22:14:35 by ichippe          ###   ########.fr       */
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
