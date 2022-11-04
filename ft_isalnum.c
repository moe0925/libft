#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
	{
		return (c);
	}
	else
		return (0);
}

// int main()
// {
// 	int a;
//     a = ft_isalnum('A');
//     printf("%d\n",a);
// 	return 0;
// }