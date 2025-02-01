/* main.c */
#include "ft_printf.h"
#include <stdio.h>

int main() {
    int len1, len2;

    // 基本的なテスト
    len1 = ft_printf("Hello %s, your score is %d!\n", "Alice", 42);
    len2 = printf("Hello %s, your score is %d!\n", "Alice", 42);
    ft_printf("ft_printf: %d characters printed\n", len1);
    printf("printf: %d characters printed\n", len2);

    // 追加テストケース
    ft_printf("Character: %c\n", 'A');
    ft_printf("Unsigned: %u\n", 4294967295);
    ft_printf("Hexadecimal (lowercase): %x\n", 255);
    ft_printf("Hexadecimal (uppercase): %X\n", 255);
    ft_printf("Pointer: %p\n", &len1);
    ft_printf("Percent: %%\n");

    return 0;
}
