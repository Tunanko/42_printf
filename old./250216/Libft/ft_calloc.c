/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 23:06:26 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 20:48:18 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	size_t			total_size;
	unsigned char	*byte_ptr;
	size_t			i;

	if (count != 0 && size > ((size_t)-1) / count)
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	byte_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h> // freeを使用するために必要

// void	*ft_calloc(size_t count, size_t size);

// int	main(void)
// {
// 	size_t	i;
// 	int		*arr;

// 	// 配列をft_callocで確保（int型10個分のメモリを確保）
// 	arr = (int *)ft_calloc(10, sizeof(int));
// 	if (!arr) // メモリ確保に失敗した場合
// 	{
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}

// 	// 確保したメモリの内容を表示（すべて0であることを確認）
// 	printf("Allocated array: ");
// 	for (i = 0; i < 10; i++)
// 		printf("%d ", arr[i]);
// 	printf("\n");

// 	// メモリを解放
// 	free(arr);

// 	return (0);
// }
