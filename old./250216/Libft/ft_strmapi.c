/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 22:08:38 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 19:50:45 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // malloc を使用するために必要
#include <stdio.h> 

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	result = (char *)malloc(sizeof(char) * (i + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// char	to_upper_if_odd(unsigned int i, char c)
// {
// 	if (i % 2 != 0)
// 		return (c - 32);
// 	return (c);
// }

// int	main(void)
// {
// 	char	*result;
// 	char	*input = "abcdef";

// 	// 奇数インデックスの文字を大文字に変換する関数を使用
// 	result = ft_strmapi(input, to_upper_if_odd);
// 	if (result)
// 	{
// 		printf("Input:  \"%s\"\n", input);
// 		printf("Output: \"%s\"\n", result);
// 		free(result); // 動的メモリを解放
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }
