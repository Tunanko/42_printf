/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/28 19:18:32 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // size_t の定義のために追加

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// void print_memory(const char *label, const char *buffer, size_t size)
// {
//     printf("%s: ", label);
//     for (size_t i = 0; i < size; i++)
//         printf("%02x ", (unsigned char)buffer[i]);
//     printf("\n");
// }

// int main(void)
// {
//     char buffer[50] = "Hello, 42Tokyo!";
//     printf("Before bzero:\n");
//     print_memory("buffer", buffer, 16);

//     bzero(buffer + 7, 6);

//     printf("\nAfter bzero:\n");
//     print_memory("buffer", buffer, 16);

//     return 0;
// }
