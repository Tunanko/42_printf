/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/11/18 15:20:00 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // NULL と size_t の定義を使用

/**
 * ft_memchr - メモリ領域内で指定された値を検索する関数
 * @s: 検索対象のメモリ領域
 * @c: 検索する値（unsigned char に変換される）
 * @n: 検索するバイト数
 * 
 * Return:
 *   値が見つかった場合: その値が存在する最初の場所のポインタを返す
 *   見つからない場合: NULL を返す
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char memory[] = "Hello, 42Tokyo!";
// 	char target = 'T';
// 	char not_found = 'Z';
// 	char null_char = '\0';

// 	// テスト1: 値が存在する場合
// 	printf("Test 1: Searching for '%c'\n", target);
// 	printf("Original memchr: %s\n", 
// 		(char *)memchr(memory, target, sizeof(memory)));
// 	printf("ft_memchr:       %s\n\n", 
// 		(char *)ft_memchr(memory, target, sizeof(memory)));

// 	// テスト2: 値が存在しない場合
// 	printf("Test 2: Searching for '%c'\n", not_found);
// 	printf("Original memchr: %s\n", 
// 		(char *)memchr(memory, not_found, sizeof(memory)));
// 	printf("ft_memchr:       %s\n\n", 
// 		(char *)ft_memchr(memory, not_found, sizeof(memory)));

// 	// テスト3: NULL 終端文字の検索
// 	printf("Test 3: Searching for '\\0'\n");
// 	printf("Original memchr: %s\n", 
// 		(char *)memchr(memory, null_char, sizeof(memory)));
// 	printf("ft_memchr:       %s\n", 
// 		(char *)ft_memchr(memory, null_char, sizeof(memory)));

// 	return (0);
// }
