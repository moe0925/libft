/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:58:12 by moeota            #+#    #+#             */
/*   Updated: 2022/11/11 21:36:54 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*substr2(char *s2, unsigned int start, char *p, size_t len)
{
	size_t	i;
	size_t	len_s;

	len_s = ft_strlen(s2);
	i = 0;
	while (s2[start + i] != '\0' && i < (len_s - start) && i < len)
	{
		p[i] = s2[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	char	*p;
	int		len_s;

	p = 0;
	if (!s)
		return (0);
	len_s = ft_strlen(s);
	if (len_s <= start || len == 0 )
	{
		p = (char *)malloc(sizeof(char) * 1);
		if (!p)
			return (NULL);
		p[0] = 0;
		return (p);
	}
	
	else if (len_s - start < len)
		p = (char *)malloc(sizeof(char) * (len_s - start));
	else
		p = (char *)malloc(sizeof(char) * len + 1);
	if (!(p))
	{
		free(p);
		return(NULL);
	}
	s2 = (char *)s;
	return (substr2(s2, start, p, len));
}

// #include "libft.h"
// char *ft_substr(char const *s, unsigned int start,size_t len)
// {
// 	size_t i;
// 	char *s2;
// 	char *p;
// 	if (ft_strlen(s) < start)
// 	{
// 		p = (char*)malloc(sizeof(char) * 1);
// 		p[0] = 0;
// 		return (p);
// 	}
// 	else if (ft_strlen(s) - start < len)
// 		p = (char*)malloc(sizeof(char) * (ft_strlen(s) - start));
// 	else
// 		p = (char*)malloc(sizeof(char) * len + 1);
// 	if (!(p))
// 		return (NULL);
// 	s2 = (char *)s;
// 	i = 0;
// 	while (s2[start + i] != '\0' && (i < (ft_strlen(s)) - start) && i < len)
// 	{
// 		p[i] = s2[start + i];
// 		i++;
// 	}
// 	p[i] = '\0';
// 	return (p);
// }

// int main()
// {
// 	char *str = "tripouille";
// 	int start1 = 3;
// 	int len1 = 100;
// 	ft_substr(str,start1,5);
// 	// printf("%s",ft_substr(str,start1,len1));
// 	system("leaks -q a.out");

// 	return 0;
// }