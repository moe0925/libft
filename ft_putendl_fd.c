#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		return ;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
	return ;
}

// int main()
// {
//     int fd = 1;
//     char *s1 = "12345";
//     ft_putendl_fd(s1,fd);
//     return 0;

// }