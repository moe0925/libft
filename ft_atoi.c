/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:58:58 by moeota            #+#    #+#             */
/*   Updated: 2022/11/15 22:08:04 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	skip(unsigned char *str2, int *minus)
{
	int	i;

	i = 0;
	while (((str2[i] >= 9) && (str2[i] <= 13)) || (str2[i] == 32))
		i++;
	if (str2[i] == 43 || str2[i] == 45)
	{
		if (str2[i] == 45)
			*minus = -1;
	i++;
	}
	return (i);
}

static int	my_plusatol(long num, unsigned char *str, int i)
{
	if (num == INT32_MAX / 10 && str[i + 1] > '7')
		return ((int)(num * 10 + str[i + 1] - '0'));
	if (num < __LONG_MAX__ / 100)
		return ((int)(num * 10 + str[i + 1] - '0'));
	if ((num == __LONG_MAX__ / 10 && str[i + 1] < '8'))
		return ((int)(num * 10 + str[i + 1] - '0'));
	if (num == __LONG_MAX__ / 100 && str[i + 1] >= '8')
		return ((int)__LONG_MAX__);
	if (num > __LONG_MAX__ / 100)
		return ((int)__LONG_MAX__);
	return (0);
}

static int	my_minusatol(long num, unsigned char *str, int i)
{
	if (num == INT32_MAX / 10 && str[i + 1] > '8')
		return ((int)((num * 10 + str[i + 1] - '0') * (-1)));
	if (num < LONG_MAX / 100)
		return ((int)(num * 10 * (-1) + str[i + 1] - '0'));
	if ((num == LONG_MAX / 10 && str[i + 1] < '9'))
		return ((int)((num * 10 + str[i + 1] - '0') * (-1)));
	if (num == LONG_MAX / 100 && str[i + 1] >= '9')
		return ((int)LONG_MIN);
	if (num > LONG_MAX / 100)
		return ((int)LONG_MIN);
	return (0);
}

int	ft_atoi(const char *str)
{
	long			num;
	int				i;
	int				minus;
	unsigned char	*str2;

	str2 = (unsigned char *)str;
	num = 0;
	minus = 1;
	i = skip(str2, &minus);
	while ((str2[i] >= 48) && (str2[i] <= 57))
	{
		if (num * 100 / 100 != num)
		{
			if (minus == 1)
				return (my_plusatol(num, str2, i));
			if (minus == -1)
				return (my_minusatol(num, str2, i));
		}
		num = num + str[i] - 48;
		num = num * 10;
		i++;
	}
	num = num / 10;
	return (num * minus);
}

// int main()
// {
// 	char *str = "-100";
// 	// ft_atoi(str);
// 	printf("%d\n", ft_atoi(str));
// }

// int main(void) 
// {
//     char *str = "\t\v\f\r\n \f00-000000060\f50";
//     char *str2 = "     +100";
//     char *str3 = "\t\v\f\r\n \f-\f\t\n\r     06050";
//     char *str4 = "99999999999999999999999999";
//     char *str5 = "-999999999999999999999999";
//     char *str6 = "9223372036854775807";
//     char *str7 = "-9223372036854775808";
//     char *str8 = "9223372036854775808"; // 8
//     char *str9 = "-9223372036854775809"; 
//     char *str10 = "9223372036854775801";
//     char *str11 = "-9223372036854775807"; //7
//     char *str12 = "2147483647";
//     char *str13 = "-2147483648";
// 	 printf("=========str===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str));
//     printf("=========str2===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str2));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str2));
//     printf("=========str3===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str3));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str3));
//     printf("=========str4===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str4));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str4));
//     printf("=========str5===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str5));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str5));
//     printf("=========!str6===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str6));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str6));
//     printf("=========!str7===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str7));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str7));
//     printf("=========!str8===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str8));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str8));
//     printf("=========!str9===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str9));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str9));
//     printf("=========!str10===========\n");
//  printf("atoi : int型変数numの値は: %d\n", atoi(str10));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str10));
//     printf("=========!str11===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str11));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str11));
//     printf("=========!str12===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str12));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str12));
//     printf("=========!str13===========\n");
//     printf("atoi : int型変数numの値は: %d\n", atoi(str13));
//     printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str13));
//     return (0);
// }
