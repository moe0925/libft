#include <stdio.h>
int ft_tolower(int c)
{
    int c2;
    if (c >= 65 && c <= 90)
    {
        c2 = c + 32;
        return (c2);
    }
    else 
        return (c);

}

// int main ()
// {
//     int c;
//     // c = toupper('a');
//     // printf("aを大文字に変換→%c\n",c);
//     c = ft_tolower('A');
//     printf("Aを小文字に変換→%c\n",c);
// }

