/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:55:01 by moeota            #+#    #+#             */
/*   Updated: 2022/11/11 01:39:11 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
