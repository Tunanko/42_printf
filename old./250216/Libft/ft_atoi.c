/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 19:18:32 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>

// // テスト用の ft_atoi を呼び出して結果を表示する
// // テストケースにはさまざまな入力パターンを用意している

// int	main(void)
// {
// 	// テストケース
// 	const char *test1 = "42";           // シンプルな正の数値
// 	const char *test2 = "   -42";       // 空白を含む負の数値
// 	const char *test3 = "+42";          // 正符号付きの数値
// 	const char *test4 = "   123abc456"; // 数値の後に文字が含まれるパターン
// 	const char *test5 = "abc123";       // 数値では始まらないパターン

// 	// テスト1: シンプルな数値
// 	printf("Test 1: Input: '%s'\n", test1);
// 	printf("Result: %d (Expected: 42)\n\n", ft_atoi(test1));

// 	// テスト2: 空白をスキップし、負の数値を解析
// 	printf("Test 2: Input: '%s'\n", test2);
// 	printf("Result: %d (Expected: -42)\n\n", ft_atoi(test2));

// 	// テスト3: 正符号付きの数値を解析
// 	printf("Test 3: Input: '%s'\n", test3);
// 	printf("Result: %d (Expected: 42)\n\n", ft_atoi(test3));

// 	// テスト4: 数値の後に文字が含まれる場合、最初の数値部分だけを解析
// 	printf("Test 4: Input: '%s'\n", test4);
// 	printf("Result: %d (Expected: 123)\n\n", ft_atoi(test4));

// 	// テスト5: 数値で始まらない場合、0 を返す
// 	printf("Test 5: Input: '%s'\n", test5);
// 	printf("Result: %d (Expected: 0)\n\n", ft_atoi(test5));

// 	return (0);
// }
