/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoja <ijoja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 22:32:57 by ijoja             #+#    #+#             */
/*   Updated: 2024/12/30 20:48:05 by ijoja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void	to_upper_odd(unsigned int i, char *c)
// {
// 	if (i % 2 == 1)
// 		*c = toupper(*c);
// }

// int	main(void)
// {
// 	char str1[] = "abcdef";
// 	char str2[] = "42tokyo";
// 	char str3[] = "";

// 	printf("Before: %s\n", str1);
// 	ft_striteri(str1, to_upper_odd);
// 	printf("After:  %s\n\n", str1);

// 	printf("Before: %s\n", str2);
// 	ft_striteri(str2, to_upper_odd);
// 	printf("After:  %s\n\n", str2);

// 	printf("Before: \"%s\"\n", str3);
// 	ft_striteri(str3, to_upper_odd);
// 	printf("After:  \"%s\"\n\n", str3);

// 	return (0);
// }
