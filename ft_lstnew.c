#include  "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new_t;

    new_t = malloc(sizeof(t_list));
    if (!new_t)
        return(NULL);
    new_t->content = content;
	new_t->next = NULL;
    return (new_t);
}

// int		main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit";

// 	t_list	*elem;

// 	elem = ft_lstnew((void *)str);
// 	printf("%p\n", elem->content);
// }
