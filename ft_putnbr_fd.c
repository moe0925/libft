/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:56:25 by moeota            #+#    #+#             */
/*   Updated: 2022/11/07 22:56:27 by moeota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd);
void	ft_putnbr(int nb, int fd);
void	ex_intmin(int fd);

void	ft_putnbr(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10, fd);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48, fd);
}

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ex_intmin(fd);
		return ;
	}
	ft_putnbr(n, fd);
	return ;
}

void	ex_intmin(int fd)
{
	write(fd, "-214748", 7);
	write(fd, "3648", 4);
}

// int main()
// {
//     int nbr = -2147483648;
//     ft_putnbr_fd(nbr,1);
//     return 0;
// }