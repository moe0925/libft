#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int con;

    con = 0;
    while(lst)
    {
        lst = lst -> next;
        con++;
    }
    return (con);
}

// int main()
// {
//     printf("配列全体のメモリサイズ: %ld\n", sizeof lst); //配列全体のメモリサイズ
//     printf("配列の要素一つ分のメモリサイズ: %ld\n", sizeof lst[0]); //配列の要素一つ分の大きさ
//     printf("配列の要素数: %d\n", arrayNumber); //配列の要素数 (10)
// }