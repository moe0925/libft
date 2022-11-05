#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    if (new == NULL)
        return ;
    while (*lst != NULL)
        lst = &((*lst) -> next);
    *lst = new;
}

    // int i;
    // node_t * ndPtr;

    // if (n < 0) return FAILURE;
    // for (i = 0; i < n && *ndPtrPtr != NULL; i++) {
    //     ndPtrPtr = &((*ndPtrPtr)->next);
    // }
    // if (i < n) return FAILURE;
    // ndPtr = nodeNew(dt, *ndPtrPtr);
    // if (ndPtr == NULL) return FAILURE;
    // *ndPtrPtr = ndPtr;
    // return SUCCESS;