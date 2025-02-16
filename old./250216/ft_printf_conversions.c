#include "ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *s)
{
	int	len;

	if (!s)
	{
		// NULL文字列は特別に"(null)"と表示
		write(1, "(null)", 6);
		return (6);
	}
	// 文字列長を測定して一括出力
	len = ft_strlen(s);
	write(1, s, len);
	return (len);
}

int	ft_print_pointer(void *ptr)
{
	unsigned long long	addr;
	int					count;

	if (!ptr)
	{	
		// NULLポインタは"(nil)"と表示
		write(1, "(nil)", 5);
		return (5);
	}
	addr = (unsigned long long)ptr;
	// "0x"プレフィックスを出力
	write(1, "0x", 2);
	count = 2;
	// ポインタ値を16進数で出力（小文字）
	count += ft_putnbr_base(addr, "0123456789abcdef");
	return (count);
}

int	ft_print_int(int n)
{
	long	num;
	int		count;

	count = 0;
	num = n;
	if (n < 0)
	{
		// 負数の場合はマイナス符号を出力し、正数に変換
		write(1, "-", 1);
		count++;
		num = -num;
	}
	// 絶対値部分を10進数で出力
	count += ft_putnbr_base(num, "0123456789");
	return (count);
}

int	ft_print_unsigned(unsigned int n)
{
	// 符号なし10進数はそのまま出力
	return (ft_putnbr_base(n, "0123456789"));
}

int	ft_print_hex(unsigned int n, int uppercase)
{
	if (uppercase)
		return (ft_putnbr_base(n, "0123456789ABCDEF"));
	else
		return (ft_putnbr_base(n, "0123456789abcdef"));
}
