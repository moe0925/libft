#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!(del))
		return ;
	while (lst != NULL)
	{
		if (lst -> content != NULL)
			del(lst -> content);
		free(lst);
		lst = NULL;
	}
}
