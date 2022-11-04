#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int		i;
	char	*str2;

	i = 0;
	str2 = (char *)s;
	while (str2[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main()
// {
// 	char *str;
// 	str = "12345";
// 	ft_strlen(str);
// 	printf("%d",ft_strlen(str));
// }