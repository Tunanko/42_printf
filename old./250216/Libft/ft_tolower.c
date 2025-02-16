/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:40:00 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/29 16:45:20 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_tolower - 大文字を小文字に変換する関数
** 引数:
**   c: 判定する文字 (int 型)
**
** 戻り値:
**   大文字の場合: 対応する小文字
**   その他の場合: そのままの値
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int	main(void)
// {
// 	char test_chars[] = {'A', 'Z', 'a', 'z', '0', '@', ' '};
// 	int i = 0;

// 	printf("Basic Tests:\n");
// 	while (i < (int)(sizeof(test_chars) / sizeof(char)))
// 	{
// 		int c = test_chars[i];
// 		printf("ft_tolower('%c') = '%c', tolower('%c') = '%c'\n",
// 			c, ft_tolower(c), c, tolower(c));
// 		i++;
// 	}
// 	return (0);
// }
