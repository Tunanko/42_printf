/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 20:46:28 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 17:59:03 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // malloc, free を使用するために必要
#include <stddef.h> // size_t を使用するために必要

static void	*free_split(char **split, size_t index)
{
	while (index > 0)
	{
		index--;
		free(split[index]);
	}
	free(split);
	return (NULL);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*allocate_word(const char **s, char c)
{
	size_t	len;
	size_t	i;
	char	*word;

	while (**s == c)
		(*s)++;
	len = 0;
	while ((*s)[len] && (*s)[len] != c)
		len++;
	if (len + 1 < len)
		return (NULL);
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = (*s)[i];
		i++;
	}
	word[len] = '\0';
	*s += len;
	return (word);
}

static char	**allocate_split_array(size_t words)
{
	char	**split;

	if (words == 0)
	{
		split = (char **)malloc(sizeof(char *));
		if (!split)
			return (NULL);
		split[0] = NULL;
		return (split);
	}
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = allocate_split_array(words);
	if (!split)
		return (NULL);
	i = 0;
	while (i < words)
	{
		split[i] = allocate_word(&s, c);
		if (!split[i])
			return (free_split(split, i));
		i++;
	}
	split[i] = NULL;
	return (split);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char **result;
// 	const char *test1 = "Hello,42,Tokyo";
// 	const char *test2 = "---Split---this---string---";
// 	const char *test3 = "a;b;c;d;e;";
// 	const char *test4 = "****Hello World****";
// 	const char *test5 = "Words#Connected#With#Hash";
// 	const char *test6 = "NoDelimiter";

// 	size_t i;

// 	// テスト1: カンマで区切る
// 	printf("テスト1: 'Hello,42,Tokyo' を区切り文字 ',' で分割\n");
// 	result = ft_split(test1, ',');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("結果[%zu]: '%s'\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	printf("\n");

// 	// テスト2: ハイフンで区切る
// 	printf("テスト2: '---Split---this---string---' を区切り文字 '-' で分割\n");
// 	result = ft_split(test2, '-');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("結果[%zu]: '%s'\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	printf("\n");

// 	// テスト3: セミコロンで区切る
// 	printf("テスト3: 'a;b;c;d;e;' を区切り文字 ';' で分割\n");
// 	result = ft_split(test3, ';');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("結果[%zu]: '%s'\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	printf("\n");

// 	// テスト4: アスタリスクで区切る
// 	printf("テスト4: '****Hello World****' を区切り文字 '*' で分割\n");
// 	result = ft_split(test4, '*');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("結果[%zu]: '%s'\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	printf("\n");

// 	// テスト5: ハッシュ記号で区切る
// 	printf("テスト5: 'Words#Connected#With#Hash' を区切り文字 '#' で分割\n");
// 	result = ft_split(test5, '#');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("結果[%zu]: '%s'\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	printf("\n");

// 	// テスト6: 区切り文字がない場合
// 	printf("テスト6: 'NoDelimiter' を区切り文字 ' ' で分割\n");
// 	result = ft_split(test6, ' ');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("結果[%zu]: '%s'\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	printf("\n");

// 	return (0);
// }
