/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 20:13:43 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 21:58:24 by ijoja            ###   ########.fr       */
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

static char	*allocate_empty_string(void)
{
	char	*substr;

	substr = (char *)malloc(1);
	if (!substr)
		return (NULL);
	substr[0] = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (allocate_empty_string());
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	const char *test1 = "Hello, 42Tokyo!";
// 	const char *test2 = "Short";

// 	char *result1 = ft_substr(test1, 7, 6);
// 	printf("Test 1: Original: '%s'\n", test1);
// 	printf("Substr: '%s' (Expected: '42Tokyo')\n\n", result1);
// 	free(result1);

// 	char *result2 = ft_substr(test2, 10, 5);
// 	printf("Test 2: Original: '%s'\n", test2);
// 	printf("Substr: '%s' (Expected: '')\n\n", result2);
// 	free(result2);

// 	char *result3 = ft_substr(test1, 7, 50);
// 	printf("Test 3: Original: '%s'\n", test1);
// 	printf("Substr: '%s' (Expected: '42Tokyo!')\n\n", result3);
// 	free(result3);

// 	char *result4 = ft_substr("", 0, 5);
// 	printf("Test 4: Original: '%s'\n", "");
// 	printf("Substr: '%s' (Expected: '')\n", result4);
// 	free(result4);

// 	return (0);
// }
