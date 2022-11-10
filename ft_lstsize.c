/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:55:01 by moeota            #+#    #+#             */
/*   Updated: 2022/11/11 01:41:23 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	con;

	con = 0;
	while (lst)
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