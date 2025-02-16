#include "ft_printf.h"

// 静的なヘルパー関数: フォーマット指定子に応じて正しい出力処理を行う
static int	process_specifier(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (c == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	va_start(args, format);         // 可変長引数の処理を開始
	count = 0;
	i = 0;
	while (format[i] != '\0')       // フォーマット文字列を一文字ずつ処理
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			// '%'を検出し、次に文字が存在する場合
			i++;  // '%'の次の文字（フォーマット指定子）に進む
			// 指定子に基づいて引数を取り出し、対応する出力処理を実行
			count += process_specifier(format[i], args);
		}
		else
		{
			// 通常の文字はそのまま出力
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);                   // 可変長引数の処理終了
	return (count);
}
