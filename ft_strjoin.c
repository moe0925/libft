/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:57:02 by moeota            #+#    #+#             */
/*   Updated: 2022/11/15 21:43:08 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*join1(char *ss1, char *ss2, char *p)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (ss1[i] != '\0')
	{
		p[i] = ss1[i];
		i++;
	}
	while (ss2[j] != '\0')
	{
		p[i + j] = ss2[j];
		j++;
	}
	p[i + j] = 0;
	return (p);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss1;
	char	*ss2;
	char	*p;

	ss1 = (char *)s1;
	ss2 = (char *)s2;
	if (!s1)
		return (NULL);
	p = malloc(sizeof(char) * (ft_strlen(ss1) + ft_strlen(ss2) + 1));
	if (!p)
		return (NULL);
	return (join1(ss1, ss2, p));
}

//  #include <stdio.h>
// int	main(void)
// {
// 	char *str1;
// 	char *str2;

// 	str1 = "";
// 	str2 = "";
// 	printf("%s",ft_strjoin(str1,str2));

// 	return (0);
// }

// #include <stdlib.h>
// int	malloc_len(char **strs, int size, char *sep);

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// char	*ft_strcat(char *dest, char *src)
// {
// 	int	i;
// 	int	j;

// 	i = 0;
// 	j = 0;
// 	while (dest[i])
// 		i++;
// 	while (src[j])
// 	{
// 		dest[i + j] = src[j];
// 		j++;
// 	}
// 	dest[i + j] = 0;
// 	return (dest);
// }

// char	*ft_strjoin(int size, char **strs, char *sep)
// {
// 	int		i;
// 	char	*str;

// 	if (size == 0)
// 	{
// 		str = malloc(sizeof(char) * (malloc_len(strs, size, sep) + 1));
// 		*str = 0;
// 		return (str);
// 	}
// 	str = malloc(sizeof(char) * (malloc_len(strs, size, sep) + 1));
// 	if (!(str))
// 		return (NULL);
// 	*str = 0;
// 	i = 0;
// 	while (i < size)
// 	{
// 		ft_strcat(str, strs[i]);
// 		if (i < size - 1)
// 			ft_strcat(str, sep);
// 		i++;
// 	}
// 	return (str);
// }

// int	malloc_len(char **strs, int size, char *sep)
// {
// 	int	len_ans1;
// 	int	i;

// 	len_ans1 = 0;
// 	i = 0;
// 	while (i < size)
// 	{
// 		len_ans1 = len_ans1 + ft_strlen(strs[i]);
// 		i++;
// 	}
// 	i = 0;
// 	while (i < size - 1)
// 	{
// 		len_ans1 = len_ans1 + ft_strlen(sep);
// 		i++;
// 	}
// 	return (len_ans1);
// }

// // #include <stdio.h>
// // int	main(void)
// // {
// // 	char	**strs1;
// // 	char	*sep1;
// // 	int size1;
// // 	strs1[0]= "tokyo";
// // 	strs1[1]= "kyoto";
// // 	strs1[2]= "okinawa";
// // 	strs1[3]= "osaka";
// // 	sep1= ",";
// // 	size1 = 4;
// // 	printf("%s", ft_strjoin(size1,&strs1[0],sep1));
// // 	return (0);
// // }