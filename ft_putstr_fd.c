#include "libft.h"
void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;

    if (!s || !fd)
        return;
    while (s[i]!='\0')
    {
        write(fd,&s[i],1);
        i++;
    }

    return;
}

// int main()
// {
//     char *str;
//     str = "12345";
//     for(int i =0;i<6;i++)
//         printf("%s",str[i]);
//     return 0;
// }