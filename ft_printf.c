/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichippe <ichippe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 22:13:06 by ichippe           #+#    #+#             */
/*   Updated: 2025/03/16 22:13:09 by ichippe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	process_format_argument(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (specifier == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (specifier == 'u')
		return (ft_print_un(va_arg(args, unsigned int)));
	if (specifier == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	if (specifier == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	if (specifier == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf_core(const char *str, va_list args)
{
	int	i;
	int	len;
	int	ret;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			ret = process_format_argument(str[i + 1], args);
			if (ret == -1)
				return (-1);
			i++;
		}
		else
		{
			ret = ft_putchar(str[i]);
			if (ret == -1)
				return (-1);
		}
		len = len + ret;
		i++;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;

	va_start(args, str);
	len = ft_printf_core(str, args);
	va_end(args);
	return (len);
}
