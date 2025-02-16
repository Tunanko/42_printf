/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 21:26:02 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 19:12:21 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // malloc を使用するために必要
#include <stddef.h> // size_t を使用するために必要

// 数値の桁数を取得する関数
static size_t	get_num_length(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

// 数値を文字列に変換する関数
static void	convert_num_to_str(
	char *result,
	unsigned int num,
	size_t len,
	int is_negative
)
{
	if (is_negative)
		result[0] = '-';
	while (len > (size_t)is_negative)
	{
		len--;
		result[len] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char			*result;
	size_t			len;
	unsigned int	num;
	int				is_negative;

	len = get_num_length(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		num = -n;
	}
	else
		num = n;
	convert_num_to_str(result, num, len, is_negative);
	return (result);
}
// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	int	tests[] = {0, 42, -42, 123456789, -123456789, -2147483648, 2147483647};
// 	size_t	i;
// 	char	*result;

// 	i = 0; // インデックスを初期化
// 	while (i < sizeof(tests) / sizeof(tests[0])) // 配列の要素数分ループ
// 	{
// 		result = ft_itoa(tests[i]);
// 		if (result) // メモリ確保が成功した場合
// 		{
// 			printf("ft_itoa(%d) = %s\n", tests[i], result); // 結果を表示
// 			free(result); // 確保したメモリを解放
// 		}
// 		else // メモリ確保が失敗した場合
// 		{
// 			printf("ft_itoa(%d) = NULL\n", tests[i]);
// 		}
// 		i++; // インデックスを次に進める
// 	}
// 	return (0);
// }
