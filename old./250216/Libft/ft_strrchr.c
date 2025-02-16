/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:10:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/11/18 14:50:00 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * ft_strrchr - 指定された文字の最後の出現箇所を探す関数
 * @s: 検索対象の文字列
 * @c: 探したい文字（int型）
 *
 * Return: 見つかった場合はその文字のポインタを返す。
 *         見つからない場合は NULL を返す。
 */
char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char *str = "Hello, 42Tokyo!Hello!";
// 	char c1 = 'H';
// 	char c2 = '!';
// 	char c3 = 'z'; // 存在しない文字
// 	char c4 = '\0'; // 終端文字

// 	// テスト1: 存在する文字（複数回登場）
// 	printf("Test 1:\n");
// 	printf("Original strrchr: %s\n", strrchr(str, c1));
// 	printf("ft_strrchr:       %s\n\n", ft_strrchr(str, c1));

// 	// テスト2: 存在する文字（末尾）
// 	printf("Test 2:\n");
// 	printf("Original strrchr: %s\n", strrchr(str, c2));
// 	printf("ft_strrchr:       %s\n\n", ft_strrchr(str, c2));

// 	// テスト3: 存在しない文字
// 	printf("Test 3:\n");
// 	printf("Original strrchr: %s\n", strrchr(str, c3));
// 	printf("ft_strrchr:       %s\n\n", ft_strrchr(str, c3));

// 	// テスト4: 終端文字
// 	printf("Test 4:\n");
// 	printf("Original strrchr: %s\n", strrchr(str, c4));
// 	printf("ft_strrchr:       %s\n", ft_strrchr(str, c4));

// 	return (0);
// }
