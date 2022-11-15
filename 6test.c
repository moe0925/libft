#include "libft.h"
int my_atol(long long	num, int num2);
int my_atol2(long long	num, int num2);


int ft_atoi(const char *str)
{
	long 	num;
	int			i;
	int			minus;

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
		minus = -1;
		i++;
	}
		// printf ("hi");

	while ((str2[i] >= 48) && (str2[i] <= 57))
	{
		num = num + str[i] - 48;
		num = num * 10;
		// printf ("num :: %ld\n", num);
		if (my_atol(num * minus,num/10 * minus) != -100)
			return (my_atol(num * minus,num * minus /10));
		i++;
	}
	// printf ("hi");
	// printf("%ld",(num / 10));
    // if (my_atol2(num * minus,num / 10 * minus)) ;
	// return (num / 10 * minus);
	// if  (my_atol(num * minus))
	return (my_atol2(num * minus,num * minus /10));
	

	// num = num / 10;
	// // if (num > 2147483647)
	// // 	return ((int)(num));
	// return (num * minus);
}

int my_atol(long long	num, int num2)
{
    int max;
	int min;
    max = INT16_MAX; ///2147483647
	// printf ("%d",__LONG_MAX__);
	// printf("%lld",(num / 100 * 100));

    if (num /100 * 100 > 2147483647)
		if (!(num/10 <= 2147483647 && num/10 >= 2147483640))
			// {
			// 	return(num2);
		// 	// }
		// else

		// {
			return((int)(9223372036854775807));
		// }
	// if (num /10 >= 2147483640 && num/10 <= 2147483647)
	// 	return(num2);
	if(num /100 * 100 < -2147483648)
		if (!(num/10 >= -2147483648 && num/10 <= -2147483640))
	// 		return(num2);
	// 	else
			return((int)(-9223372036854775808));
	return (-100);
	
}


int my_atol2(long long	num, int num2)
{
    int max;
	int min;
    max = INT16_MAX; ///2147483647
	// printf ("%d",__LONG_MAX__);
	// printf("%lld",(num / 100 * 100));

    if (num /100 * 100 > 2147483647)
		if (num/10 <= 2147483647 && num/10 >= 2147483640)
			{
				return(num2);
			}
		else

		{
			return((int)(9223372036854775807));
		}
	if (num /10 >= 2147483640 && num/10 <= 2147483647)
		return(num2);
	if(num /100 * 100 < -2147483648)
		if (num/10 >= -2147483648 && num/10 <= -2147483640)
			return(num2);
		else
			return((int)(-9223372036854775808));
	else 
	return (num2);
	
}


int main()
{
 char *str = "-+99";
//  ft_atoi(str);
ft_atoi(str);
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
//     char *str6 = "9223372036854775807";
//     char *str7 = "-9223372036854775808";
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
//     return (0);
// }

