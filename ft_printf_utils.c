/* ft_printf_utils.c */
#include "ft_printf.h"

int ft_putchar(char c) { return write(1, &c, 1); }

int ft_putstr(char *s) {
    int len = 0;
    while (s[len]) len++;
    return write(1, s, len);
}

int ft_putnbr(int n) {
    char num_str[12];
    int len = 0, temp = n;
    
    if (n == 0)
        return write(1, "0", 1);
    
    if (n == -2147483648)
        return write(1, "-2147483648", 11);
    
    if (n < 0) {
        num_str[len++] = '-';
        temp = -temp;
    }
    
    int start = len;
    while (temp) {
        num_str[len++] = (temp % 10) + '0';
        temp /= 10;
    }
    
    for (int i = start, j = len - 1; i < j; i++, j--) {
        char swap = num_str[i];
        num_str[i] = num_str[j];
        num_str[j] = swap;
    }
    
    return write(1, num_str, len);
}
