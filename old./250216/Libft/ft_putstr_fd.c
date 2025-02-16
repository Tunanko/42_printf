/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 22:43:21 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 20:48:00 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write関数を使うために必要

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;

	if (!s)
		return ;
	len = 0;
	while (s[len])
		len++;
	write(fd, s, len);
}

// #include <fcntl.h> // open関数を使うために必要
// #include <unistd.h> // close関数を使うために必要
// #include <stdio.h>  // printf関数を使うために必要

// void	ft_putstr_fd(char *s, int fd);

// int	main(void)
// {
// 	int	fd;

// 	// 標準出力に文字列を出力
// 	printf("Standard output: ");
// 	ft_putstr_fd("Hello, 42Tokyo!\n", 1);

// 	// 標準エラー出力に文字列を出力
// 	printf("Standard error: ");
// 	ft_putstr_fd("This is an error message.\n", 2);

// 	// ファイルに文字列を出力
// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("open");
// 		return (1);
// 	}
// 	ft_putstr_fd("Writing to a file using ft_putstr_fd.\n", fd);
// 	close(fd);

// 	printf("Check 'output.txt' for the written content.\n");
// 	return (0);
// }
