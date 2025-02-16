/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:30:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 17:46:19 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * ft_strchr - 文字列内で指定された文字の最初の出現箇所を探す関数
 * @s: 検索対象の文字列
 * @c: 探したい文字（int型）
 * 
 * Return: 見つかった場合はその文字のポインタを返す。
 *         見つからない場合は NULL を返す。
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// // テスト用に ft_strchr を使用
// char	*ft_strchr(const char *s, int c);

// int	main(void)
// {
// 	const char *str = "Hello, 42Tokyo!";
// 	char c1 = 'T';
// 	char c2 = '!';
// 	char c3 = 'z'; // 存在しない文字

// 	// テスト1: 存在する文字
// 	printf("Test 1:\n");
// 	printf("Original strchr: %s\n", strchr(str, c1));
// 	printf("ft_strchr:       %s\n\n", ft_strchr(str, c1));

// 	// テスト2: 存在する文字 (末尾)
// 	printf("Test 2:\n");
// 	printf("Original strchr: %s\n", strchr(str, c2));
// 	printf("ft_strchr:       %s\n\n", ft_strchr(str, c2));

// 	// テスト3: 存在しない文字
// 	printf("Test 3:\n");
// 	printf("Original strchr: %s\n", strchr(str, c3));
// 	printf("ft_strchr:       %s\n\n", ft_strchr(str, c3));

// 	// テスト4: NULL 終端文字の検索
// 	printf("Test 4:\n");
// 	printf("Original strchr: %s\n", strchr(str, '\0'));
// 	printf("ft_strchr:       %s\n", ft_strchr(str, '\0'));

// 	return (0);
// }
