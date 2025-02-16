/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 18:30:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/28 21:29:53 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>  // size_t の定義のために追加

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char dest1[50] = "Hello, World!";
//     char dest2[50] = "Hello, World!";
//     const char src[50] = "42Tokyo";

//     printf("Before memcpy:\n");
//     printf("dest1: %s\n", dest1);
//     printf("dest2: %s\n", dest2);

//     ft_memcpy(dest1, src, 7);
//     memcpy(dest2, src, 7);

//     printf("\nAfter memcpy:\n");
//     printf("dest1: %s\n", dest1);
//     printf("dest2: %s\n", dest2);

//     return (0);
// }
