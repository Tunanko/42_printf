/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:50:49 by ijoja             #+#    #+#             */
/*   Updated: 2024/11/16 19:50:49 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// テスト用の main 関数
// int	main(void)
// {
// 	// テストケース
// 	char test_cases[] = {'0', '5', '9', 'a', '%', ' '};
// 	int i = 0;

// 	printf("Basic Tests:\n");
// 	while (i < (int)(sizeof(test_cases) / sizeof(char)))
// 	{
// 		char c = test_cases[i];
// 		int result = ft_isdigit(c);
// 		printf("ft_isdigit('%c') = %d\n", c, result);
// 		i++;
// 	}

// 	// 境界値テスト
// 	printf("\nBoundary Tests:\n");
// 	int ascii[] = {'/', '0', '9', ':'}; // 境界値とその前後
// 	for (i = 0; i < (int)(sizeof(ascii) / sizeof(int)); i++)
// 	{
// 		int c = ascii[i];
// 		printf("ft_isdigit(%d) = %d ('%c')\n", c, ft_isdigit(c), c);
// 	}

// 	return (0);
// }
