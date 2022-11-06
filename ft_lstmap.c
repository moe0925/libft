#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_t;
    t_list *newarg;

    if (!(f) || !(del) || !(lst))
        return (NULL);
    newarg = NULL;
    while (lst != NULL)
    {
        new_t = ft_lstnew(f(lst -> content));
        if (new_t == NULL)
        {
            ft_lstclear(&lst, del);
            return (NULL);
        }
        ft_lstadd_back(&newarg, new_t);
        lst = lst -> next;
    }
    return (newarg);
}

// id ft_lstclear(t_list **lst, void (*del)(void*))
// {
//     t_list *lst2;

//     if (!(del) || !(lst))
//         return ;
//     while (*lst != NULL)
//     {
//         lst2 = (*lst) -> next;
//         ft_lstdelone(*lst, del);
//         (*lst) = lst2;
//     }
// }



//  t_list *tmp;

//     tmp = lst;
//     if (!f)
//         return ;
//     while (tmp != NULL)
//     {
//         f(tmp -> content);
//         tmp = tmp -> next;
//     }