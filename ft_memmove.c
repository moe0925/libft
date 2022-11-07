/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:55:49 by moeota            #+#    #+#             */
/*   Updated: 2022/11/07 22:55:51 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*move1(unsigned char *str, unsigned char *src2, size_t len)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{	
		str[i] = src2[i];
		--i;
	}
	return (str);
}

void	*move2(unsigned char *str, unsigned char *src2, size_t len)
{
	int	i;

	i = 0;
	while ((size_t)i < len)
	{	
		str[i] = src2[i];
		i++;
	}
	return (str);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str;
	unsigned char	*src2;

	str = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	if (str == NULL && src == NULL )
		return (NULL);
	if (src <= dst)
		return (move1(str, src2, len));
	else
		return (move2(str, src2, len));
	return (str);
}

// int main(void)
// {
//         char str[] = "0123456789";
//         printf("移動前：%s\n",str);
//         memmove(str+3, str, 5);        /* 重複エリアのコピー */
//         printf("移動後：%s\n",str);
// 		printf("-------------------------------\n");
// 		char str2[] = "0123456789";
// 		printf("移動前：%s\n",str2);
// 		//str2 -> 345  str2 012
//         ft_memmove(str2+3,str2,5);   
// 		printf("移動後：%s\n",str2);     /* 重複エリアのコピー */
//         return 0;
// }