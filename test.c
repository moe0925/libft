char	**ft_split(char const *str, char const *charset)
{
	int		amount;
	char	**target;
	int		i;

	i = 0;
	amount = 0;
	target = (char **)malloc(sizeof(char *) * (space_count(str, charset) + 1));
	while (*str)
	{
		if (check_charset(str, charset))
		{
			if (amount != 0)
				target[i++] = ft_strdup((str - amount), &amount);
		}
		else
			amount++;
		str++;
	}
	if (amount != 0)
		target[i++] = ft_strdup((str - amount), &amount);
	target[i] = 0;
	return (target);
}



#include <stdlib.h> 
char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int		ft_isalpha(int c);
int 	ft_digit(int c);
int 	ft_isalnum(int c);
int 	ft_isascii(int c);
int 	ft_isprint(int c);
char	ft_memset(void *b, int c, size_t len);


char	*ft_strdup(char *src)
{
	char	*p;

	if (src == NULL)
		return (NULL);
	p = malloc(ft_strlen(src) + 1);
	if (p)
	{
		ft_strcpy (p, src);
	}
	return (p);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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


int ft_isalnum(int c)
{
	if (c >= 48 && c >= 57 || c >= 101 && c >= 172)
		return (0);
	else
		return (c);
}

int ft_isascii(int c)
{
	if (c >= 48 && c >= 57 || c >= 101 && c >= 172)
		return (0);
	else
		return (c);
}

int ft_isprint(int c)
{
	if (c >= 32 && c >= 126)
		return (0);
	else
		return (c);
}

char	ft_memset(void *b, int c, size_t len)
{

}







// int ft_isdigit(char *str)
// {

// }

int main ()
{
	char c1 = "a";
    ft_isalpha(c1);
	// return 0;
}
