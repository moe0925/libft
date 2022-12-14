/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:57:44 by moeota            #+#    #+#             */
/*   Updated: 2022/11/16 21:23:37 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*nstr1(const char *haystack, const char *needle,
					char *p, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			if (needle[1] == '\0')
				return (&(p[i]));
			while (needle[j] != '\0' && needle[j] == haystack[i + j]
				&& (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return (&(p[i]));
			}
		}
		i++;
	}
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p;

	if (haystack == NULL && len == 0)
		return (NULL);
	p = (char *)haystack;
	if (*needle == '\0')
		return (p);
	if (*haystack == '\0')
		return (NULL);
	else
		return (nstr1(haystack, needle, p, len));
}

// int main()
// {
// 	const char *largestring = "abbbcdefg";
// 	const char *smallstring = "bbc";
// 	char *ptr;
// 	char *ptr2;

// 	ptr = strnstr(largestring, smallstring, 20);
// 	printf("%s\n",ptr);

// 	printf("----------------------------------------------------\n");
// 	ptr2 = ft_strnstr(largestring, smallstring, 20);
// 	printf("%s\n",ptr2);
// } 