/* ft_printf.c */
#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int printed_chars;

    va_start(args, format);
    printed_chars = ft_process_format(format, args);
    va_end(args);

    return printed_chars;
}
