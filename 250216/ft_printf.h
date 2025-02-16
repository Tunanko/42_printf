#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>   // va_list, va_start, va_arg, va_end
# include <unistd.h>   // write関数
# include <stdlib.h>   // malloc, free など
# include "libft.h"    // libftの関数を使う場合

int		ft_printf(const char *format, ...);
int		ft_print_char(char c);
int		ft_print_str(char *s);
int		ft_print_pointer(void *ptr);
int		ft_print_int(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int n, int uppercase);
int		ft_putnbr_base(unsigned long long n, const char *base);

#endif
