/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:53:26 by moeota            #+#    #+#             */
/*   Updated: 2022/11/28 21:59:28 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (c);
	else
		return (0);
}

// #include <stdio.h>
// #include <ctype.h>
// int main ()
// {
// 	int c;
// 	c = (int)'a';
// 	ft_isalpha(c);
// 	printf("%d\n",ft_isalpha('a'));
// 	printf("%d\n",isalpha('a'));
// 	// isalpha(c);
// }