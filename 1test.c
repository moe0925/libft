#include "libft.h"

static int	check_charset(char *str, char c)
{
	if (c == *str)
		return (0);
	return (1);
}

static int	space_count(char *str, char c)
{
	int	count;
	int	amount;

	count = 0;
	amount = 0;
	while (*str)
	{
		if (check_charset(str, c) == 0)
		{
			if (amount != 0)
				count++;
			amount = 0;
		}
		else
			amount++;
		str++;
	}
	if (amount != 0)
		return (count + 1);
	else
		return (count);
}

char	**ft_split3(char const *s, char c)
{
	printf("---------------------------------------");

	int	i;
	int	j;

	int	temp;
	int	count;
	char *str;
	char **target;
	char *p;
	int	amount;
	int len;

	i = 0;
	if (!s)
		return (0);
	if ((s[0] == '\0' && c == 0))
	{
		target = ft_calloc(1,sizeof(char));
		return (target);
	}
	str = (char *)s;
	len = ft_strlen(str);

	target = (char **)malloc(sizeof(char *) * (space_count(str, c) + 1));
	if (!(target))
		return (0);
	
	while (str[i] != '\0')
	{
		if (check_charset(&str[i], c) == 0)
			str[i] = 0;
		i++;
	}
	while(i < len)
	{
		count = ft_strlen(&str[i]);
		if (count!= 0)
		{
			p = ft_strdup(&str[i]);
			if (!p)
				return (0);
			target[j] = p;
		}
		i += count;
		count = 0;
		j++;
		// free(p);
		// printf("---------------------------------------");
	}
	return (target);

}

	int main()
	{
		char **ans;
		ft_split3("aakbbb", 'k');
		ans = ft_split3("aakbbb", 'k');
		// ans = ft_split3("Tripouille ", ' ');
		// printf("%d",ft_split("\0aa\0bbb", '\0'));
		// int i = 0;
		// while(ans[i] != 0)
		// {
		// 	printf("%s\n", ans[i]);
		// 	i++;
		// }
		// system("leaks -q a.out");

	}

	// while (*str2)
	// {
	// 	if (check_charset(str2, c))
	// 	{
	// 		if (amount != 0)
	// 			target[i++] = ft_strdup2((str2 - amount), &amount) ;
	// 	}
	// 	else
	

    // ft_strlen(&str[3]);



