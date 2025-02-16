/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:55:45 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/28 21:10:18 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // size_t の定義のために追加

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	if (dest_ptr > src_ptr && dest_ptr < src_ptr + n)
		while (n--)
			dest_ptr[n] = src_ptr[n];
	else
	{
		i = 0;
		while (i < n)
		{
			dest_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	// テスト1: メモリ領域が重ならない場合
// 	char test1_src[50] = "ABCDEFGHIJ";
// 	char test1_dest[50] = "1234567890";

// 	printf("Test 1 - Before memmove (No Overlap):\n");
// 	printf("Source: %s\n", test1_src);
// 	printf("Dest:   %s\n", test1_dest);

// 	ft_memmove(test1_dest, test1_src, 10);
// 	printf("\nTest 1 - After memmove (No Overlap):\n");
// 	printf("Source: %s\n", test1_src);
// 	printf("Dest:   %s\n", test1_dest);

// 	// テスト2: メモリ領域が重なる場合（コピー元 < コピー先）
// 	char test2_buffer[50] = "Hello, 42Tokyo!";

// 	printf("\nTest 2 - Before memmove (Overlap):\n");
// 	printf("Buffer: %s\n", test2_buffer);

// 	ft_memmove(test2_buffer + 6, test2_buffer, 6);
// 	printf("\nTest 2 - After memmove (Overlap):\n");
// 	printf("Buffer: %s\n", test2_buffer);

// 	// テスト3: メモリ領域が重なる場合（コピー元 > コピー先）
// 	char test3_buffer[50] = "42Tokyo is awesome!";

// 	printf("\nTest 3 - Before memmove (Overlap):\n");
// 	printf("Buffer: %s\n", test3_buffer);

// 	ft_memmove(test3_buffer, test3_buffer + 8, 10);
// 	printf("\nTest 3 - After memmove (Overlap):\n");
// 	printf("Buffer: %s\n", test3_buffer);

// 	return (0);
// }
