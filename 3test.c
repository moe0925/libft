#include "libft.h"

int main()
{
    char *str = "1234567";
    ft_strlen(&str[3]);
    printf("%zu",ft_strlen(&str[3]));
    printf("%zu",ft_strlen(str));

}