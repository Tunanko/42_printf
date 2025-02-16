/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 19:50:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/11/16 21:06:23 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
// #include <stdio.h>

// int main(void)
// {
//     // テストケース
//     char test_cases[] = {'A', 'z', '5', '%', ' '};
//     int i = 0;

//     printf("Basic Tests:\n");
//     while (i < (int)(sizeof(test_cases) / sizeof(char)))
//     {
//         char c = test_cases[i];
//         int result = ft_isalnum(c);
//         printf("ft_isalnum('%c') = %d\n", c, result);
//         i++;
//     }

//     // 境界値テスト
//     printf("\nBoundary Tests:\n");
//     int ascii[] = {47, 48, 57, 58, 64, 65, 90, 
//                    91, 96, 97, 122, 123};
//     for (i = 0; i < (int)(sizeof(ascii) / sizeof(int)); i++)
//     {
//         int c = ascii[i];
//         printf("ft_isalnum(%d) = %d ('%c')\n", c, ft_isalnum(c), c);
//     }

//     return 0;
// }