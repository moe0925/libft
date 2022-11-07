/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:55:57 by moeota            #+#    #+#             */
/*   Updated: 2022/11/07 22:55:58 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	char			c2;
	size_t			i;

	str = (unsigned char *)b ;
	c2 = (char)c;
	i = 0;
	while (i < len)
	{	
		str[i] = c2;
		i++;
	}
	return (str);
}

// int main ()
// {
// 	unsigned int len;

// 	char c1[] = "abcde";
// 	char src = '*';
// 	len = 7;
//     ft_memset(c1,src,len);
// 	printf("%s",(char*)ft_memset(c1,src,len));
// }

/* char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
} */

// char	*ft_strncpy(char *dest, char *src, unsigned int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < n && src[i] != '\0')
// 	{	
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	// while (i < n)
// 	// {
// 	// 	dest[i] = '\0';
// 	// 	i ++;
// 	// }
// 	return (dest);
// }

// int	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		i++;
// 	}
// 	return (i);
// }