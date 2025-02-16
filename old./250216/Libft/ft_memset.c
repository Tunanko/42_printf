/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 17:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/28 19:07:22 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // size_t の定義のために追加

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char buffer1[50] = "Hello, 42Tokyo!";
//     char buffer2[50] = "Hello, 42Tokyo!";

//     printf("Before memset:\n");
//     printf("buffer1: %s\n", buffer1);
//     printf("buffer2: %s\n", buffer2);

//     ft_memset(buffer1, '*', 5);
//     memset(buffer2, '*', 5);

//     printf("\nAfter memset:\n");
//     printf("buffer1: %s\n", buffer1);
//     printf("buffer2: %s\n", buffer2);

//     return (0);
// }
