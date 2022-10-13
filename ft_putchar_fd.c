void ft_putchar_fd(char c, int fd)
{
	char buf[4];
	write(fd,buf,4);
	return;
}

int main()
{

}