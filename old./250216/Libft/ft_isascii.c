/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:00:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/11/18 10:10:00 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	int test_cases[] = {0, 48, 65, 127, 128, -1};
// 	int i = 0;

// 	printf("Basic Tests (ft_isascii vs isascii):\n");
// 	while (i < (int)(sizeof(test_cases) / sizeof(int)))
// 	{
// 		int c = test_cases[i];
// 		printf("Char: %d, isascii: %d, ft_isascii: %d\n",
// 			c, isascii(c), ft_isascii(c));
// 		i++;
// 	}

// 	return (0);
// }
