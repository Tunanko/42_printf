/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 15:38:26 by ijoja             #+#    #+#             */
/*   Updated: 2024/11/17 16:05:47 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int test_chars[] = {31, 32, 48, 65, 97, 126, 127};
//     int i = 0;

//     printf("Testing ft_isprint against isprint:\n");
//     while (i < 7)
//     {
//         int c = test_chars[i];
//         printf("Char: %d, isprint: %d, ft_isprint: %d\n",
//                c, isprint(c), ft_isprint(c));
//         i++;
//     }
//     return (0);
// }
