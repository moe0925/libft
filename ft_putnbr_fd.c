#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    int i;
	int nb2;

    i = 0;
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10,fd);
	nb2 = n % 10 + 48;
	write(fd,&nb2,1);
	if (n / 10 == 0 )
		write(fd,"\n",1);
	
    return;
}

int main()
{
    int nbr = 10;
    ft_putnbr_fd(nbr,1);
    
    return 0;

}