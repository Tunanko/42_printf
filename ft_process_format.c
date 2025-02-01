/* ft_printf_conversions.c */
#include "ft_printf.h"

int ft_process_format(const char *format, va_list args) {
    int i = 0, printed_chars = 0;

    while (format[i]) {
        if (format[i] == '%') {  // '%' を正しく比較
            i++;
            if (format[i] == 'c')  // 'c' もシングルクォートで囲む
                printed_chars += ft_putchar(va_arg(args, int));
            else if (format[i] == 's')
                printed_chars += ft_putstr(va_arg(args, char *));
            else if (format[i] == 'd' || format[i] == 'i')
                printed_chars += ft_putnbr(va_arg(args, int));
            else if (format[i] == '%')  // '%' を出力する処理
                printed_chars += ft_putchar('%');
        } else {
            printed_chars += ft_putchar(format[i]);
        }
        i++;
    }
    return printed_chars;
}
