/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:55:42 by moeota            #+#    #+#             */
/*   Updated: 2022/11/07 22:55:44 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*str;
	unsigned char	*src;
	size_t			i;

	str = (unsigned char *)buf1;
	src = (unsigned char *)buf2;
	if (str == NULL && src == NULL )
		return (NULL);
	i = 0;
	while (i < n)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

// int main ()
// {
// 	unsigned int len;

// 	char c1[] = "12345";
// 	char c2[] = "67890";
// 	len = 6;
//     ft_memcpy(c1,c2,len);
// 	printf("%s\n",(char*)ft_memcpy(NULL,NULL,len));
// 	printf("-----------------------------");
// 	char cc1[] = "12345";
// 	char cc2[] = "67890";
// 	len = 6;
//     memcpy(cc1,cc2,len);
// 	printf("%s",(char*)memcpy(NULL,NULL,len));
// }
// #include "libft.h"
// void	*ft_memset(void *b, int c, size_t len )
// {
// 	char *str;
// 	char c2;
// 	str = (char *)b ;
// 	c2 = (char)c;

// 	int	i;

// 	i = 0;
// 	while (i < len)
// 	{	
// 		str[i] = c2;
// 		i++;
// 	}
// 	return (str);
// }

// char	*ft_strcpy(char *dest, char *src)
// {
// 	int	i;

// 	i = 0;
// 	while (src[i] != '\0')
// 	{	
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }
