#include "libft.h"
#include <limits.h>
int minus_judge(int minus);

int skip(char *str, int *minus)
{
	int	i;
	// int minus;

	// minus = 1;
	i = 0;
	while (((str[i] >= 9) && (str[i] <= 13)) || (str[i] == 32))
		i++;
	if (str[i] == 43)
		i++;

	if (str[i] == 45)
	{
		minus = -1;
		// minus_judge == -1;
		i++;
	}
	return (i);
}

// int minus_judge(int minus)
// {
// 	int minus1;

// 	minus1 = 1;
// 	if (minus == -1)
// 		return(-1);
// 	// minus = -1;
// 	// 	return(-1);
// 	minus_judge == 
// }

int str_to_int(char *str, int i , long num, int *minus)
{

	num = 0;
	printf("%d",minus);
	while ((str[i] >= 48) && (str[i] <= 57))
		{
			num = num + str[i] - 48;
			num = num * 10;

			if (num / 100 * 100 * *minus != num && num  * *minus >= 2147483640)
			{
				if (str[i] >= 48 && str[i] <= 55 && num/100 == 2147483640)////2147483647
					return (num / 10);
				// printf("-----------------");
				return ((int)__LONG_MAX__);
			}

			if (num / 100 * 100 * *minus != num * *minus && num /10 * *minus <= -2147483640)
			{
				if (str[i] >= 48 && str[i] <= 56 && num/10 * *minus  == -2147483640)
					return (num / 10 * *minus);
				return ((int)LONG_MIN);
			}
				//intmax//2147483647
			// if (num / 100 * 100 != num && num / 100 * 100 >= 2147483640)
			// 	return ((int)__LONG_MAX__);

			// if (my_atol(num * minus,num/10 * minus) != -100)
			// 	return (my_atol(num * minus,num * minus /10));
			i++;
		}
	printf("%d",minus);

	return(num / 10 * *minus);
}


int ft_atoi(const char *str)
{
	int			*minus;
	int 		i;
	long 		num;
	char *str2 = (char *)str;

	minus = 1;

	i = skip(str2, &minus);
	printf("マイナス;%d\n", minus);
	// if (minus_judge(minus) == -1);
	// 	minus == -1;
	printf("%d",minus);

	// num = str_to_int(str2 ,i , num);
	// return (num * minus);
	return (str_to_int(str2 ,i , num, *minus));
	
	// return (my_atol2(num * minus,num * minus /10));
}



int main()
{
 char *str = "-65";
//  ft_atoi(str);
// ft_atoi(str);
printf("%d\n",atoi(str));

printf("%d",ft_atoi(str));
}


// int main(void) 
// {
//     char *str = "\t\v\f\r\n \f00-000000060\f50";
//     char *str2 = "+65";
//     char *str3 = "\t\v\f\r\n \f-\f\t\n\r     06050";
//     char *str4 = "99999999999999999999999999";
//     char *str5 = "-999999999999999999999999";
//     char *str6 = "9223372036854775807";//
//     char *str7 = "-9223372036854775808";//
//     char *str8 = "9223372036854775808";
//     char *str9 = "-9223372036854775809";
//     char *str10 = "9223372036854775801";//
//     char *str11 = "-9223372036854775807";//
//     char *str12 = "2147483647";
//     char *str13 = "-2147483648";
//  printf("=========str===========\n");
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
// 	// printf("%ld",LONG_MIN);
//     return (0);
// }

