/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 20:28:52 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 22:35:53 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // malloc を使用するために必要
#include <stddef.h> // size_t を使用するために必要

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	char	*joined;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!joined)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		joined[i] = s1[i];
		i++;
	}
	while (i - s1_len < s2_len)
	{
		joined[i] = s2[i - s1_len];
		i++;
	}
	joined[i] = '\0';
	return (joined);
}

// #include <stdio.h>
// #include <stdlib.h>

// char	*ft_strjoin(char const *s1, char const *s2);

// int	main(void)
// {
// 	const char *str1 = "Hello, ";
// 	const char *str2 = "42Tokyo!";
// 	const char *str3 = "";

// 	// テスト1: 通常の文字列結合
// 	char *result1 = ft_strjoin(str1, str2);
// 	printf("Test 1: '%s' + '%s' = '%s'\n", str1, str2, result1);
// 	free(result1);

// 	// テスト2: 空文字列との結合
// 	char *result2 = ft_strjoin(str1, str3);
// 	printf("Test 2: '%s' + '%s' = '%s'\n", str1, str3, result2);
// 	free(result2);

// 	// テスト3: 両方が空文字列
// 	char *result3 = ft_strjoin(str3, str3);
// 	printf("Test 3: '%s' + '%s' = '%s'\n", str3, str3, result3);
// 	free(result3);

// 	// テスト4: 片方が NULL（エラーケース）
// 	char *result4 = ft_strjoin(NULL, str2);
// 	printf("Test 4: NULL + '%s' = '%s'\n", str2, result4);

// 	return (0);
// }
