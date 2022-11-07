/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:51:39 by ootamoeakir       #+#    #+#             */
/*   Updated: 2022/11/07 22:52:54 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;

	if (n == 0)
		return ;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{	
		str[i] = '\0';
		i++;
	}
	return ;
}
