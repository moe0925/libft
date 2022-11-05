#include "libft.h"

char	*nstr1(const char *haystack, const char *needle, char *p, size_t len)
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
				return (&p[i]);
			while (needle[j] != '\0' && needle[j] == haystack[i + j]
				&& (i + j) < len)
			{
				j++;
				if (needle[j] == '\0')
					return (&p[i]);
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
// 	const char *largestring = "";
// 	const char *smallstring = "coucou";
// 	char *ptr;
// 	char *ptr2;

// 	ptr = strnstr(largestring, smallstring, 10);
// 	printf("%s\n",ptr);

// 	printf("----------------------------------------------------\n");
// 	ptr2 = ft_strnstr(largestring, smallstring, 10);
// 	printf("%s",ptr2);
// } 