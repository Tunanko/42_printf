/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:50:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 16:45:23 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main(void)
// {
// 	char test_chars[] = {'a', 'z', 'A', 'Z', '0', '@', ' '};
// 	int i = 0;

// 	printf("Basic Tests:\n");
// 	while (i < (int)(sizeof(test_chars) / sizeof(char)))
// 	{
// 		int c = test_chars[i];
// 		printf("ft_toupper('%c') = '%c', toupper('%c') = '%c'\n",
// 			c, ft_toupper(c), c, toupper(c));
// 		i++;
// 	}
// 	return (0);
// }
