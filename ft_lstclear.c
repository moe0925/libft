#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst2;

	if (!(del) || !(lst))
		return ;
	while (*lst != NULL)
	{
		lst2 = (*lst)-> next;
		ft_lstdelone(*lst, del);
		(*lst) = lst2;
	}
}

// int main(){
//   t_list  **lst;
//   t_list  *first;
//   first = ft_lstnew(ft_strdup("test1"));
//   lst = &first;
//   ft_lstclear(lst, &free); //strdupで文字列test1のmallocをとったけど、それをfree関数がfreeするだけ。
// 	}
