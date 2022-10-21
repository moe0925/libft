#include "libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;	
	size_t temp;		

	temp = ft_strlen(dst);
	if (temp >= dstsize)
		return ( dstsize + ft_strlen(src));
	i = 0;
	// if 
	// 	return (dstsize + ft_strlen(src));
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (j + i < dstsize - 1 && temp + ft_strlen(src) >  i + j)
	{
		dst[j + i] = src[j];
			j++;
	}
	dst[j + i] = '\0';
	return ( temp + ft_strlen(src));
}

// #include <string.h>
// int main ()
// {
// 	char a1[100]= "12";
// 	char b1[]= "abcde";
	
// 	printf("%lu\n",ft_strlcat(a1,b1,3));
// 	printf("------------------------------------------\n");
// 	char a2[100]= "12";
// 	char b2[]= "abcde";
	
// 	printf("%lu",strlcat(a2,b2,3));

//     // printf("%c",a2[3]);
//     // printf("%c",a2[4]);
//     // printf("%c",a2[5]);
// 	return(0);	
// }