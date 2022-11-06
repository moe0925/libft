#include "libft.h"

char	*ft_strdup2(char *src, int *amount)
{
	char	*p;
	char	*temp;

	p = (char *)malloc(sizeof(char) * (*amount + 1));
	temp = p;
	if (!p)
		return (0);
	else
	{
		while (*amount)
		{
			*p = *src;
			p++;
			src++;
			*amount -= 1;
		}
	}
	*p = '\0';
	return (temp);
}

int	check_charset(char *str, char c)
{
	if (c == *str)
		return (1);
	return (0);
}

int	space_count(char *str, char c)
{
	int	count;
	int	amount;

	count = 0;
	while (*str)
	{
		if (check_charset(str, c))
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

char	**split2(char	*str2, char c, int amount, char **target)
{
	int	i;

	i = 0;
	while (*str2)
	{
		if (check_charset(str2, c))
		{
			if (amount != 0)
				target[i++] = ft_strdup2((str2 - amount), &amount);
		}
		else
			amount++;
		str2++;
	}
	if (amount != 0)
		target[i++] = ft_strdup2((str2 - amount), &amount);
	target[i] = 0;
	return (target);
}

char	**ft_split(char const *s, char c)
{
	int		amount;
	char	**target;
	int		i;
	char	*str2;

	if (!s)
		return (NULL);
	if ((s[0] == '\0' && c == 0))
	{
		target = malloc(sizeof(char *) * 1);
		if (!target)
			return (NULL);
		target[0] = NULL;
		return (target);
	}
	str2 = (char *)s;
	i = 0;
	amount = 0;
	target = (char **)malloc(sizeof(char *) * (space_count(str2, c) + 1));
	if (!(target))
		return (NULL);
	return (split2(str2, c, amount, target));
}

// int main()
// {
// 	char **ans;
// 	// ans = ft_split("aakbbb", 'k');
// 	ans = ft_split("aakbbb", 'k');
// 	// printf("%d",ft_split("\0aa\0bbb", '\0'));
// 	int i = 0;
// 	while(ans[i] != 0)
// 	{
// 		printf("%s\n", ans[i]);
// 		i++;
// 	}
// }
// // 	// for(int i= 0;i<10;i++)
// 	// {
// 	// 	printf("%s\n", ans[i]);
// 	// 	printf("%p\n", ans[i]);
// 	// 	printf("\n");
// 	// }
// 	// while (i < 2)
// 	// {
// 	// 	printf("%s\n", ans[i]);
// 	// 	printf("%p\n", ans[i]);
// 	// 	printf("\n");

// 	// 	i++;
// 	// }
// 	return (0);
// }

// int	check_charset(char *str, char c)
// {
// 	// int	i;

// 	// i = 0;
// 	// while (charset[i] != '\0')
// 	// {
// 		if (c == *str)
// 			return (1);
// 		// i++;
// 	// }
// 	return (0);
// }