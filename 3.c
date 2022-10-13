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