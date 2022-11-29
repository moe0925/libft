/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:57:15 by moeota            #+#    #+#             */
/*   Updated: 2022/11/30 01:21:38 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	up;
	size_t	len;

	len = ft_strlen(src);
	up = 0;
	if (dstsize == 0)
		return (len);
	else if (dstsize - 1 > len)
		up = len;
	else
		up = dstsize - 1 ;
	i = 0;
	while (i < up)
	{	
		dst[i] = src[i];
		i++;
	}
	dst[up] = '\0';
	return (len);
}

// #include <stdio.h>
// int main()
// {
// 	char a[]= "1234567890";
// 	char b[]= "coucou";
// 	ft_strlcpy(a,b,8);
// 	// printf("%lu",ft_strlcpy(a,b,3));
// 	int i ;
// 	for(i = 0;i<10;i++)
// 		printf("%c",a[i]);
// 	printf("----------------------------------------\n");
// 	char a1[]= "1234567890";
// 	char b1[]= "coucou";
// 	strlcpy(a1,b1,8);
// 	// printf("%lu",strlcpy(a1,b1,3));
// 	for(i = 0;i<10;i++)
// 			printf("%c",a1[i]);
// }