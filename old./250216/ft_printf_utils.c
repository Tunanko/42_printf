#include "ft_printf.h"

int	ft_putnbr_base(unsigned long long n, const char *base)
{
	unsigned int	base_len;
	int				count;

	base_len = ft_strlen(base);
	count = 0;
	if (n >= base_len)
		// 上位の桁を先に再帰的に出力
		count += ft_putnbr_base(n / base_len, base);
	// 下位の桁を1文字出力
	write(1, &base[n % base_len], 1);
	return (count + 1);
}
