/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:30:12 by ijoja             #+#    #+#             */
/*   Updated: 2024/11/17 16:13:58 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // size_t の定義のために追加

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     const char *test_strings[] = {"", "a", "42Tokyo", "Hello, World!",
//                                   "This is a longer string."};
//     int i = 0;

//     printf("Testing ft_strlen against strlen:\n");
//     while (i < 5)
//     {
//         const char *str = test_strings[i];
//         printf("String: \"%s\", strlen: %zu, ft_strlen: %zu\n",
//                str, strlen(str), ft_strlen(str));
//         i++;
//     }
//     return (0);
// }
