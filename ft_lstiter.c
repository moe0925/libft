#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	tmp = lst;
	if (!f)
		return ;
	while (tmp != NULL)
	{
		f(tmp -> content);
		tmp = tmp -> next;
	}
}
