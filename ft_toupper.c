#include "libft.h"

int	ft_toupper(int c)
{
	int	c2;

	if (c >= 97 && c <= 122)
	{
		c2 = c - 32;
		return (c2);
	}
	else
		return (c);
}

// int main ()
// {
//     int c;
//     // c = toupper('a');
//     // printf("aを大文字に変換→%c\n",c);
//     c = ft_toupper('a');
//     printf("aを大文字に変換→%c\n",c);
// }