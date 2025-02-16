/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:20:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 16:20:00 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h> // size_t の定義のために必要

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize == 0)
		return (src_len);
	i = 0;
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// #include <stddef.h> // size_t の定義
// // ft_strlcpy のプロトタイプ
// size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

// int main(void)
// {
//     // コピー元
//     const char *src = "42Tokyo is amazing!";

//     // テスト1: 十分なバッファサイズの場合
//     char dst1[30] = ""; // 十分に大きなバッファ
//     size_t len1 = ft_strlcpy(dst1, src, sizeof(dst1));
//     printf("Test 1: Sufficient buffer size\n");
//     printf("Source: \"%s\"\n", src);
//     printf("Dest:   \"%s\"\n", dst1);
//     printf("Returned length: %zu\n\n", len1);

//     // テスト2: バッファサイズが不足している場合
//     char dst2[10] = ""; // 小さなバッファ
//     size_t len2 = ft_strlcpy(dst2, src, sizeof(dst2));
//     printf("Test 2: Insufficient buffer size\n");
//     printf("Source: \"%s\"\n", src);
//     printf("Dest:   \"%s\"\n", dst2); // 切り詰められる
//     printf("Returned length: %zu\n", len2); // 実際の長さ
//     printf("Needed buffer size: %zu\n\n", len2 + 1); // NULL文字分を含めた必要サイズ

//     // テスト3: バッファサイズがゼロの場合
//     size_t len3 = ft_strlcpy(NULL, src, 0); // コピーせずに長さだけ取得
//     printf("Test 3: Buffer size is zero\n");
//     printf("Source: \"%s\"\n", src);
//     printf("Returned length: %zu\n", len3);
//     printf("Needed buffer size: %zu\n\n", len3 + 1);

//     // テスト4: 空のコピー元の場合
//     const char *src_empty = "";
//     char dst4[20] = ""; // 十分なバッファ
//     size_t len4 = ft_strlcpy(dst4, src_empty, sizeof(dst4));
//     printf("Test 4: Empty source\n");
//     printf("Source: \"%s\"\n", src_empty);
//     printf("Dest:   \"%s\"\n", dst4); // 空文字列がコピーされる
//     printf("Returned length: %zu\n\n", len4);

//     return 0;
// }
