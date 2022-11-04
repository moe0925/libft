#include "libft.h"

int		get_digit(int nbr);
char	*min_ret(void);
char	*int_char(int n, char *p, int i);

char	*int_char(int n, char *p, int i)
{
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	while (n >= 10)
	{	
		p[i - 1] = (n % 10) + 48;
		n = n / 10;
		i--;
	}
	if (n < 10)
	{
		p[i - 1] = n + 48;
		i--;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		i;

	if (n == -2147483648)
		return (min_ret());
	p = malloc(sizeof(char) * (get_digit(n) + 1));
	if (!p)
		return (NULL);
	i = get_digit(n);
	p[i] = '\0';
	return (int_char(n, p, i));
}

int	get_digit(int nbr)
{
	int	digit;

	digit = 1;
	if (nbr < 0)
	{
		digit++;
		nbr = -nbr;
	}
	while (nbr / 10 != 0)
	{
		nbr = nbr / 10;
		digit++;
	}
	return (digit);
}

char	*min_ret(void)
{
	char	*p;
	int		i;
	char	min[12];

	i = 0;
	strlcpy(min, "-2147483648", 12);
	p = malloc(sizeof(char) * 12);
	while (min[i] != '\0')
	{
		p[i] = min[i];
		i++;
	}
	p[12] = '\0';
	return (p);
}

// int main(void)
// {
//     int ab;
//     ab = -2147483648;
// 	printf("%s",ft_itoa(ab));
// 	return 0;
// }