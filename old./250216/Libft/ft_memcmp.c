/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 22:13:04 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // size_t の定義を使用

/**
 * ft_memcmp - メモリ領域を比較する関数
 * @s1: 比較対象の1つ目のメモリ領域
 * @s2: 比較対象の2つ目のメモリ領域
 * @n: 比較するバイト数
 * 
 * Return:
 *   s1 が s2 より小さい場合: 負の値
 *   s1 と s2 が等しい場合: 0
 *   s1 が s2 より大きい場合: 正の値
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t				i;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return ((int)ptr1[i] - (int)ptr2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char	*test_cases[][3] = {
// 		{"42Tokyo", "42Tokyo", "完全一致"},
// 		{"42Tokyo", "42Tkkyo", "一部不一致"},
// 		{"42Tokyo", "42Tok\0rest", "\\0を含む"},
// 		{"42Tok\1rest", "42Tok\0rest", "\\1 vs \\0"},
// 		{"Hello", "World", "全く異なる"},
// 		{"Short", "ShortLong", "長さ違い"},
// 		{NULL, NULL, NULL}
// 	};
// 	int		i = 0;
// 	while (test_cases[i][0] != NULL)
// 	{
// 		const char	*s1 = test_cases[i][0];
// 		const char	*s2 = test_cases[i][1];
// 		const char	*desc = test_cases[i][2];
// 		size_t		n = (strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2)) + 1;
// 		printf("Test %d: %s\n", i + 1, desc);
// 		printf("memcmp:    %d\n", memcmp(s1, s2, n));
// 		printf("ft_memcmp: %d\n\n", ft_memcmp(s1, s2, n));
// 		i++;
// 	}
// 	return (0);
// }
