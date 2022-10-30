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
	{
		digit++;
		nbr = -nbr;
	}
	while (nbr / 10 != 0 )
		{
			nbr = nbr / 10;
			digit++;
		}
	
	return (digit);
}

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *str;
	unsigned char *src2;
	// ft_memmove(str2+3,str2, 5);   

	str = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	int	i;

	if (src <= dst)
	{
		i = len - 1;
		// printf("i->[%zu]\n", i);
		// printf("%d\n", __LINE__);
		while (i >= 0)
		{	
			// printf("%d\n", __LINE__);
			str[i] = src2[i];
			// printf("%d\n", __LINE__);
			--i;
		}
		// printf("%d\n", __LINE__);
		return(str);
	}
	else
	{
		i = 0;
		while ((size_t)i < len)
		{	
			str[i] = src2[i];
			i++;
		}
	}
	return(str);
}