/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 22:49:32 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 20:23:09 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write関数を使用するために必要
#include <fcntl.h>  // open関数を使用するために必要
#include <stdio.h>  // printf関数を使用するために必要

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

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// // メイン関数: テスト用コード
// int	main(void)
// {
// 	int	fd;

// 	// 標準出力に文字列を出力
// 	printf("Standard output:\n");
// 	ft_putendl_fd("Hello, 42Tokyo!", 1);

// 	// 標準エラー出力に文字列を出力
// 	printf("Standard error:\n");
// 	ft_putendl_fd("This is an error message.", 2);

// 	// ファイルに文字列を出力
// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("open");
// 		return (1);
// 	}
// 	ft_putendl_fd("Writing to a file using ft_putendl_fd.", fd);
// 	close(fd);

// 	printf("Check 'output.txt' for the written content.\n");
// 	return (0);
// }