#include "libft.h"
int	ft_atoi(const char *str)
{
	long	num;
	long	i;
	int		minus;
	unsigned char *str2 = (unsigned char *)str;

	num = 0;
	i = 0;
	minus = 1;
	while (((str2[i] >= 9) && (str2[i] <= 13)) || (str2[i] == 32))
		i++;
	if (str2[i] == 43)
		i++;
	if (str2[i] == 45)
	{
		minus = minus * -1;
		i++;
	}

	while ((str2[i] >= 48) && (str2[i] <= 57))
	{
		num = num + str[i] - 48;
		num = num * 10;
		i++;
	}
	num = num / 10;
	// if (num > 2147483647)
	// 	return ((int)(num));
	return (num * minus);
}

int main(void) 
{
    char *str = "\t\v\f\r\n \f00-000000060\f50";
    char *str2 = "+65";
    char *str3 = "\t\v\f\r\n \f-\f\t\n\r     06050";
    char *str4 = "99999999999999999999999999";
    char *str5 = "-999999999999999999999999";
    char *str6 = "9223372036854775807";
    char *str7 = "-9223372036854775808";
    char *str8 = "9223372036854775808";
    char *str9 = "-9223372036854775809";
    char *str10 = "9223372036854775801";
    char *str11 = "-9223372036854775807";
    char *str12 = "2147483647";
    char *str13 = "-2147483648";
 printf("=========str===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str));
    printf("=========str2===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str2));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str2));
    printf("=========str3===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str3));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str3));
    printf("=========str4===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str4));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str4));
    printf("=========str5===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str5));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str5));
    printf("=========!str6===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str6));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str6));
    printf("=========!str7===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str7));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str7));
    printf("=========!str8===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str8));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str8));
    printf("=========!str9===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str9));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str9));
    printf("=========!str10===========\n");
 printf("atoi : int型変数numの値は: %d\n", atoi(str10));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str10));
    printf("=========!str11===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str11));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str11));
    printf("=========!str12===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str12));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str12));
    printf("=========!str13===========\n");
    printf("atoi : int型変数numの値は: %d\n", atoi(str13));
    printf("ft_atoi : int型変数numの値は: %d\n", ft_atoi(str13));
    return (0);
}


// #include <stdio.h>
// #include <stdlib.h>
 
// int main(void) {
//     char str[8] = "+1";
//     int num;
// 	int num2;

    
//     // 文字列型からint型への変換
//     num = atoi(str);
//     printf("int型変数numの値は: %d\n", num);
// 	num2 = ft_atoi(str);
//     printf("int型変数numの値は: %d\n", num2);
    
//     return 0;
// }

