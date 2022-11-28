/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:57:09 by moeota            #+#    #+#             */
/*   Updated: 2022/11/28 21:33:48 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;	
	size_t	temp;
	size_t	len;

	i = 0;
	j = 0;
	len = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (0);
	temp = ft_strlen(dst);
	if (temp >= dstsize)
		return (dstsize + len);
	if (dstsize == 0)
		return (temp + len);
	while (dst[i] != '\0')
		i++;
	while (j + i < dstsize - 1 && temp + len > i + j)
	{
		dst[j + i] = src[j];
			j++;
	}
	dst[j + i] = '\0';
	return (temp + len);
}

// #include <string.h>
// int main ()
// {
// 	char a1[100]= "123";
// 	char b1[]= "";
// 	printf("%lu\n",ft_strlcat(a1,b1,3));
// 	printf("%c",a1[0]);
//     printf("%c",a1[1]);
//     printf("%c",a1[2]);
//     printf("%c",a1[3]);
// 	printf("------------------------------------------\n");
// 	char a2[100]= "123";
// 	char b2[]= "";
// 	printf("%lu\n",strlcat(a2,b2,3));

//     printf("%c",a2[0]);
//     printf("%c",a2[1]);
//     printf("%c",a2[2]);
//     printf("%c",a2[3]);
// 	return(0);	
// }