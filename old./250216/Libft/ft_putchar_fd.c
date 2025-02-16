/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 22:39:54 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/21 22:42:35 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write関数を使うために必要

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include <fcntl.h> // open関数を使うために必要
// #include <unistd.h> // close関数を使うために必要
// #include <stdio.h>  // printf関数を使うために必要

// void	ft_putchar_fd(char c, int fd);

// int	main(void)
// {
// 	int	fd;

// 	// 標準出力に文字を出力
// 	printf("Standard output: ");
// 	ft_putchar_fd('A', 1);
// 	ft_putchar_fd('\n', 1);

// 	// 標準エラー出力に文字を出力
// 	printf("Standard error: ");
// 	ft_putchar_fd('B', 2);
// 	ft_putchar_fd('\n', 2);

// 	// ファイルに文字を出力
// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("open");
// 		return (1);
// 	}
// 	ft_putchar_fd('C', fd);
// 	close(fd);

// 	printf("Check 'output.txt' for the character 'C'.\n");
// 	return (0);
// }
