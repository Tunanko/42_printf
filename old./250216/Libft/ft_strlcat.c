/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:50:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 16:34:17 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	i = 0;
	while (i < dstsize - dst_len - 1 && src[i] != '\0')
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// // ft_strlcat の実装があると仮定
// size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

// int	main(void)
// {
// 	// テストケース1: 十分なバッファサイズ
// 	char dst1[20] = "Hello";
// 	const char *src1 = " World!";
// 	size_t len1 = ft_strlcat(dst1, src1, sizeof(dst1));
// 	printf("Test 1: dst=\"Hello\", src=\" World!\", dstsize=20\n");
// 	printf("Result: dst=\"%s\"\n", dst1);
// 	printf("Returned: %zu\n\n", len1);

// 	// テストケース2: バッファサイズが小さい場合
// 	char dst2[10] = "Hello";
// 	const char *src2 = " World!";
// 	size_t len2 = ft_strlcat(dst2, src2, sizeof(dst2));
// 	printf("Test 2: dst=\"Hello\", src=\" World!\", dstsize=10\n");
// 	printf("Result: dst=\"%s\"\n", dst2);
// 	printf("Returned: %zu\n\n", len2);

// 	// テストケース3: バッファがギリギリ足りる場合
// 	char dst3[12] = "Hello";
// 	const char *src3 = " World!";
// 	size_t len3 = ft_strlcat(dst3, src3, sizeof(dst3));
// 	printf("Test 3: dst=\"Hello\", src=\" World!\", dstsize=12\n");
// 	printf("Result: dst=\"%s\"\n", dst3);
// 	printf("Returned: %zu\n\n", len3);

// 	// テストケース4: バッファが全く足りない場合
// 	char dst4[6] = "Hello";
// 	const char *src4 = " World!";
// 	size_t len4 = ft_strlcat(dst4, src4, sizeof(dst4));
// 	printf("Test 4: dst=\"Hello\", src=\" World!\", dstsize=6\n");
// 	printf("Result: dst=\"%s\"\n", dst4);
// 	printf("Returned: %zu\n\n", len4);

// 	// テストケース5: 空の dst に追加
// 	char dst5[15] = "";
// 	const char *src5 = "42Tokyo";
// 	size_t len5 = ft_strlcat(dst5, src5, sizeof(dst5));
// 	printf("Test 5: dst=\"\", src=\"42Tokyo\", dstsize=15\n");
// 	printf("Result: dst=\"%s\"\n", dst5);
// 	printf("Returned: %zu\n\n", len5);

// 	// テストケース6: バッファサイズが 0 の場合
// 	char dst6[10] = "Hello";
// 	const char *src6 = "42Tokyo";
// 	size_t len6 = ft_strlcat(dst6, src6, 0);
// 	printf("Test 6: dst=\"Hello\", src=\"42Tokyo\", dstsize=0\n");
// 	printf("Result: dst=\"%s\"\n", dst6);
// 	printf("Returned: %zu\n\n", len6);

// 	return (0);
// }
