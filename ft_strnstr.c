#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	int j;
	char *p;

	p = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (p);
	else
	{
    	while (i < len)
    	{
        	if (haystack[i] == needle[0])
			{
				j = 1;
				while (needle[j] != '\0' && needle[j] == haystack[i + j])
            	{
					j++;
					if (needle[j] == '\0')
						return (&p[i]);
				}
			}
            i++;
		}
    }
	return (NULL);
}


// int main()
// {
// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Bar";
// 	char *ptr;
// 	char *ptr2;

// 	ptr = strnstr(largestring, smallstring, 5);
// 	printf("%s\n",ptr);

// 	printf("----------------------------------------------------\n");
// 	ptr2 = strnstr(largestring, smallstring, 5);
// 	printf("%s",ptr2);
// }