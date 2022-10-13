#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		i;
	int		minus;
	unsigned char *str2 = (unsigned char *)str;

	num = 0;
	i = 0;
	minus = 1;
	while (((str2[i] >= 9) && (str2[i] <= 13)) || (str2[i] == 32))
		i++;
	if (str2[0] == 43)
		i++;
	if (str2[0] == 45)
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
	return (num * minus);
}

#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    char str[8] = "+1";
    int num;
	int num2;

    
    // 文字列型からint型への変換
    num = atoi(str);
    printf("int型変数numの値は: %d\n", num);
	num2 = ft_atoi(str);
    printf("int型変数numの値は: %d\n", num2);
    
    return 0;
}