/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 23:13:01 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // size_t の定義のために追加

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len && needle[j])
			j++;
		if (!needle[j])
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	const char haystack[50] = "Hello, 42Tokyo!";
// 	const char needle1[10] = "42Tokyo";
// 	const char needle2[10] = "Hello";
// 	const char needle3[10] = "World";
// 	const char needle4[10] = "";
// 	printf("Test 1: Searching for '%s' in '%s' (len=15)\n",
// 		needle1, haystack);
// 	printf("Result: %s\n\n", ft_strnstr(haystack, needle1, 15));
// 	printf("Test 2: Searching for '%s' in '%s' (len=5)\n",
// 		needle1, haystack);
// 	printf("Result: %s\n\n", ft_strnstr(haystack, needle1, 5));
// 	printf("Test 3: Searching for '%s' in '%s' (len=15)\n",
// 		needle2, haystack);
// 	printf("Result: %s\n\n", ft_strnstr(haystack, needle2, 15));
// 	printf("Test 4: Searching for '%s' in '%s' (len=15)\n",
// 		needle3, haystack);
// 	printf("Result: %s\n\n", ft_strnstr(haystack, needle3, 15));
// 	printf("Test 5: Searching for an empty string in '%s' (len=15)\n",
// 		haystack);
// 	printf("Result: %s\n\n", ft_strnstr(haystack, needle4, 15));
// 	return (0);
// }
