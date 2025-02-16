/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 19:26:35 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // malloc を使用するために必要
#include <stddef.h> // size_t を使用するために必要

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*copy;

	len = 0;
	while (s[len])
		len++;
	copy = (char *)malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	const char *test1 = "Hello, 42Tokyo!";
// 	const char *test2 = "";
// 	const char *test3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// 	// テスト1: 一般的な文字列
// 	char *copy1 = ft_strdup(test1);
// 	printf("Original: '%s'\n", test1);
// 	printf("Copy:     '%s'\n\n", copy1);
// 	free(copy1); // 確保したメモリを解放

// 	// テスト2: 空文字列
// 	char *copy2 = ft_strdup(test2);
// 	printf("Original: '%s'\n", test2);
// 	printf("Copy:     '%s'\n\n", copy2);
// 	free(copy2); // 確保したメモリを解放

// 	// テスト3: 長い文字列
// 	char *copy3 = ft_strdup(test3);
// 	printf("Original: '%s'\n", test3);
// 	printf("Copy:     '%s'\n", copy3);
// 	free(copy3); // 確保したメモリを解放

// 	return (0);
// }
