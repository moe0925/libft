/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:55:01 by moeota            #+#    #+#             */
/*   Updated: 2022/11/16 21:50:37 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_t;

	new_t = malloc(sizeof(t_list));
	if (!new_t)
		return (NULL);
	new_t -> content = content;
	new_t -> next = NULL;
	return (new_t);
}

// int		main(void)
// {
// 	char	str[] = "lorem ipsum dolor sit";

// 	t_list	*elem;

// 	elem = ft_lstnew((void *)str);
// 	printf("%p\n", elem->content);
// }
