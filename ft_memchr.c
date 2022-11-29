/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:55:18 by moeota            #+#    #+#             */
/*   Updated: 2022/11/30 07:24:11 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)ch)
			return (&(str[i]));
		else
			i++;
	}
	return (NULL);
}

// #include        <stdio.h>
// #include        <string.h>
// int main(void)
// {
//         char str[] = "abcdef\0ghij";    /* 途中に空文字のある文字列 */
//         char *p;
//         p = memchr(str, 'h', 12);
//         printf("検索文字は文字列の%d番目\n",p - str);
// 		printf("-------------------------------------\n");
//  		char str2[] = "abcdef\0ghij";    /* 途中に空文字のある文字列 */
//         char *p1;
// 		p1 = ft_memchr(str2, 'h', 12);
// 		printf("検索文字は文字列の%d番目\n",p1 - str2);
//         return 0;
// }