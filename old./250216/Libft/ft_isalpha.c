/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 21:00:49 by ijoja             #+#    #+#             */
/*   Updated: 2024/11/16 19:29:43 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	// テストケース
// 	char test_cases[] = {'A', 'Z', 'a', 'z', '1', '%', ' '};
// 	int i = 0;

// 	printf("Basic Tests:\n");
// 	while (i < (int)(sizeof(test_cases) / sizeof(char)))
// 	{
// 		char c = test_cases[i];
// 		int result = ft_isalpha(c);
// 		printf("ft_isalpha('%c') = %d\n", c, result);
// 		i++;
// 	}

// 	// 境界値テスト
// 	printf("\nBoundary Tests:\n");
// 	int ascii[] = {64, 65, 90, 91, 96, 97, 122, 123}; // 境界値とその前後
// 	for (i = 0; i < (int)(sizeof(ascii) / sizeof(int)); i++)
// 	{
// 		int c = ascii[i];
// 		printf("ft_isalpha(%d) = %d ('%c')\n", c, ft_isalpha(c), c);
// 	}

// 	return (0);
// }
