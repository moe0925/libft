#include "libft.h"

void *ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char *str;
	char *src;
	str = (char *)buf1;
	src = (char *)buf2;
	int	i;

	i = 0;
	while (i < n)
	{	
		str[i] = src[i];
		i++;
	}
	return (str);
}

int main ()
{
	unsigned int len;

	char c1[] = "abcde";
	char c2[] = "ABCDE";
	len = 6;
    ft_memcpy(c1,c2,len);
	printf("%s",(char*)ft_memcpy(c1,c2,len));
}


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
