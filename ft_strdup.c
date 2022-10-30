#include "libft.h" 
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(const char *src)
{
	char	*p;
	char	*src2;
	src2 = (char*)src;
	// if (src2 == NULL)
	// 	return (NULL);
	p = malloc(ft_strlen(src2) + 1);
	if (!(p))
		return (NULL);
	
	if (p)
	{
		ft_strcpy (p, src2);
	}
	return (p);
}



char	*ft_strcpy(char *dest, char *src)
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

// #include <stdio.h>
// int main()
// {
// 	char str1[] = ""; 
// 	// printf("%s\n",ft_strdup(str1));
// 	printf("%s\n",ft_strdup(NULL));

// 	return (0);
// }