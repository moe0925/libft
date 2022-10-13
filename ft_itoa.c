#include "libft.h"
int get_digit(int nbr);

char *ft_itoa(int n)
{
	char *p;
	int i;
	p = malloc(sizeof(char) * (get_digit(n) + 1));
	i = get_digit(n);
	p[i] = '\0';
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

int get_digit(int nbr)
{
	int digit;

	digit = 1;
	if(nbr < 0)
		digit++;
	while (nbr / 10 != 0 )
		{
			nbr = nbr / 10;
			digit++;
		}
	
	return (digit);
}

// int main(void)
// {
//     int ab;
//     ab = -123;
// 	printf("%s",ft_itoa(ab));
// 	return 0;
// }