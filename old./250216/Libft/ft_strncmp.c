/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 23:13:54 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // size_t の定義のために追加

/**
 * ft_strncmp - 文字列の最初の n バイトを比較する関数
 * @s1: 比較する最初の文字列
 * @s2: 比較するもう一つの文字列
 * @n: 比較する最大バイト数
 * 
 * Return: 
 *   0 - 文字列が一致する場合
 *   負の値 - s1 が s2 より小さい場合
 *   正の値 - s1 が s2 より大きい場合
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char *str1 = "Hello, 42Tokyo!";
// 	const char *str2 = "Hello, 42Kyoto!";
// 	const char *str3 = "Hello, 42Tokyo!";
// 	const char *str4 = "";

// 	// テストケース1: 部分一致
// 	printf("Test 1:\n");
// 	printf("Original strncmp: %d\n", strncmp(str1, str2, 7));
// 	printf("ft_strncmp:       %d\n\n", ft_strncmp(str1, str2, 7));

// 	// テストケース2: 完全一致
// 	printf("Test 2:\n");
// 	printf("Original strncmp: %d\n", strncmp(str1, str3, 20));
// 	printf("ft_strncmp:       %d\n\n", ft_strncmp(str1, str3, 20));

// 	// テストケース3: 空文字列との比較
// 	printf("Test 3:\n");
// 	printf("Original strncmp: %d\n", strncmp(str1, str4, 5));
// 	printf("ft_strncmp:       %d\n", ft_strncmp(str1, str4, 5));

// 	return (0);
// }
