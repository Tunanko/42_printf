/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 23:01:47 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 23:14:34 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // write関数を使用するために必要

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd(147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}

// #include <fcntl.h>  // open関数を使用するために必要
// #include <unistd.h> // close関数を使用するために必要
// #include <stdio.h>  // printf関数を使用するために必要

// void	ft_putnbr_fd(int n, int fd);
// void	ft_putchar_fd(char c, int fd);

// int	main(void)
// {
// 	int	fd;

// 	// 標準出力に整数を出力
// 	printf("Standard output:\n");
// 	ft_putnbr_fd(42, 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putnbr_fd(-42, 1);
// 	ft_putchar_fd('\n', 1);

// 	// 標準エラー出力に整数を出力
// 	printf("Standard error:\n");
// 	ft_putnbr_fd(123456789, 2);
// 	ft_putchar_fd('\n', 2);
// 	ft_putnbr_fd(-2147483648, 2);
// 	ft_putchar_fd('\n', 2);

// 	// ファイルに整数を出力
// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	if (fd == -1)
// 	{
// 		perror("open");
// 		return (1);
// 	}
// 	ft_putnbr_fd(2147483647, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putnbr_fd(-2147483648, fd);
// 	ft_putchar_fd('\n', fd);
// 	close(fd);

// 	printf("Check 'output.txt' for the written content.\n");
// 	return (0);
// }
