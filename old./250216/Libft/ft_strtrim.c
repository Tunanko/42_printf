/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 20:34:12 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 23:31:05 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // mallocを使用するために必要
#include <stddef.h> // size_tを使用するために必要

static int	is_in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t
	get_trimmed_length(const char *s1, const char *set, size_t *start)
{
	size_t	len;
	size_t	end;

	len = 0;
	while (s1[len])
		len++;
	end = len;
	if (*set == '\0')
	{
		*start = 0;
		return (len);
	}
	*start = 0;
	while (s1[*start] && is_in_set(s1[*start], set))
		(*start)++;
	if (*start == len)
		return (0);
	while (end > *start && is_in_set(s1[end - 1], set))
		end--;
	return (end - *start);
}

static char	*allocate_empty_string(void)
{
	char	*trimmed;

	trimmed = (char *)malloc(1);
	if (!trimmed)
		return (NULL);
	trimmed[0] = '\0';
	return (trimmed);
}

static char	*create_trimmed_string(const char *s1, size_t start, size_t len)
{
	size_t	i;
	char	*trimmed;

	trimmed = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (i < len)
	{
		trimmed[i] = s1[start + i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	len = get_trimmed_length(s1, set, &start);
	if (len == 0)
		return (allocate_empty_string());
	return (create_trimmed_string(s1, start, len));
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h> // strcmpを使用するために必要

// char	*ft_strtrim(char const *s1, char const *set);

// int	main(void)
// {
// 	const char *test1 = "  Hello, 42Tokyo!  ";
// 	const char *test2 = "---Trim this string---";
// 	const char *set1 = " ";
// 	const char *set2 = "-";

// 	// テスト1: スペースをトリム
// 	char *result1 = ft_strtrim(test1, set1);
// 	printf("Test 1: '%s' -> '%s'\n", test1, result1);
// 	free(result1);

// 	// テスト2: 特定の文字をトリム
// 	char *result2 = ft_strtrim(test2, set2);
// 	printf("Test 2: '%s' -> '%s'\n", test2, result2);
// 	free(result2);

// 	// テスト3: トリム対象が空文字列
// 	char *result3 = ft_strtrim("", set1);
// 	printf("Test 3: '%s' -> '%s'\n", "", result3);
// 	free(result3);

// 	// テスト4: set が空文字列
// 	char *result4 = ft_strtrim(test1, "");
// 	printf("Test 4: '%s' -> '%s'\n", test1, result4);
// 	free(result4);

// 	// --- 追加: テスターの失敗ケースの再現と検証 ---
// 	printf("\n--- Additional Tests ---\n");

// 	// テスト5: トリム対象文字列が空文字列 (s1 = "", set = "123")
// 	char *result5 = ft_strtrim("", "123");
// 	printf("Test 5: '%s' -> '%s'\n", "", result5);
// 	if (strcmp(result5, "") == 0)
// 		printf("Test 5: Passed (Empty string as expected)\n");
// 	else
// 		printf("Test 5: Failed (Unexpected result)\n");
// 	free(result5);

// 	// テスト6: トリム対象がない場合 (s1 = "123", set = "")
// 	char *result6 = ft_strtrim("123", "");
// 	printf("Test 6: '%s' -> '%s'\n", "123", result6);
// 	if (strcmp(result6, "123") == 0)
// 		printf("Test 6: Passed (No trimming as expected)\n");
// 	else
// 		printf("Test 6: Failed (Unexpected result)\n");
// 	free(result6);

// 	// テスト7: トリムセットも入力文字列も空文字列 (s1 = "", set = "")
// 	char *result7 = ft_strtrim("", "");
// 	printf("Test 7: '%s' -> '%s'\n", "", result7);
// 	if (strcmp(result7, "") == 0)
// 		printf("Test 7: Passed (Empty string as expected)\n");
// 	else
// 		printf("Test 7: Failed (Unexpected result)\n");
// 	free(result7);

// 	// テスト8: 特定のセット文字でトリム (s1 = "abcdba", set = "acb")
// 	char *result8 = ft_strtrim("abcdba", "acb");
// 	printf("Test 8: '%s' -> '%s'\n", "abcdba", result8);
// 	if (strcmp(result8, "d") == 0)
// 		printf("Test 8: Passed ('d' as expected)\n");
// 	else
// 		printf("Test 8: Failed (Unexpected result)\n");
// 	free(result8);

// 	return (0);
// }
