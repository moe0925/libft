#include "libft.h"

char	*ft_strcat(char *dest, char *src);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;		
	size_t	k;		
	
	k = ft_strlen(dst);
	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	if (dstsize > (dstsize - ft_strlen(dst) - 1))
	{
		while (i < (dstsize - 1 - ft_strlen(dst)))
		{	
			dst[j + i] = src[j];
			j++;
		}
		return (k + ft_strlen(src));
	}
	else
	{
		char *src2;
		src2 = (char *)src;

		ft_strcat(dst,src2);
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[j + i] = src[j];
		j++;
	}
	dest[j + i] = '\0';
	return (dest);
}	

// #include <string.h>
// int main ()
// {
// 	char a1[100]= "12";
// 	char b1[]= "abcde";
	
// 	printf("%lu\n",ft_strlcat(a1,b1,0));
// 	printf("------------------------------------------\n");
// 	char a2[100]= "12";
// 	char b2[]= "abcde";
	
// 	printf("%lu",strlcat(a2,b2,0));

//     // printf("%c",a2[3]);
//     // printf("%c",a2[4]);
//     // printf("%c",a2[5]);
// 	return(0);	
// }