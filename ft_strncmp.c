#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char *ss1;
	unsigned char *ss2;

	ss1 = (unsigned char*)s1;
	ss2 = (unsigned char*)s2;

	i = 0;
	while (i < n)
	{	
		if (ss1[i] != ss2[i] || ss1[i] == '\0' || ss2[i] == '\0')
			return ((ss1[i] - ss2[i]));
		i++;
		// if (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		// 	i++;
		// else if (s1[i] != s2[i] && s1[i] != '\0' && s2[i] != '\0')
		// 	return (s1[i] - s2[i]);
		// else if (s1[i] == '\0' || s2[i] == '\0')
		// 	return (s1[i] - s2[i]);
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "ABC";
    printf("ABC: ABD   = %d\n", strncmp(str, "ABD", 2));
    printf("ABC: ABC   = %d\n", strncmp(str, "ABC", 2));
    printf("ABC: AAA   = %d\n", strncmp(str, "AAA", 2));
    printf("ABC: ABCD  = %d\n", strncmp(str, "ABCD", 2));
    printf("ABC: AB    = %d\n", strncmp(str, "AB", 2));
    printf("ABC: B     = %d\n", strncmp(str, "B", 2));
    printf("ABC: A     = %d\n\n", strncmp(str, "A", 2));
	printf("AB: ABC     = %d\n\n", strncmp("AB","ABC" , 3));

    printf("ABC: ABD   = %d\n", ft_strncmp(str, "ABD", 2));
    printf("ABC: ABC   = %d\n", ft_strncmp(str, "ABC", 2));
    printf("ABC: AAA   = %d\n", ft_strncmp(str, "AAA", 2));
    printf("ABC: ABCD  = %d\n", ft_strncmp(str, "ABCD", 2));
    printf("ABC: AB    = %d\n", ft_strncmp(str, "AB", 2));
    printf("ABC: B     = %d\n", ft_strncmp(str, "B", 2));
    printf("ABC: A     = %d\n", ft_strncmp(str, "A", 2));
	printf("AB: ABC     = %d\n\n", ft_strncmp("AB","ABC" , 3));
    return 0;
}
