#include "libft.h" 
size_t	ft_strlen(const char *s);
char *ft_strrchr(const char *s, int c)
{
    int i;
    char *s2;

    i = 0;
	s2 = (char *)s;
    if (c == '\0')
    {
        while (s2[i] != '\0')
        {
            i++;
        }
        return(&s2[i]);
    }
    
	i = ft_strlen(s2) - 1;
    while(i >= 0)
    {
        if (s2[i] == (char)c)
            return (&s2[i]);
        else
            i--;
    }
    return (NULL);
}

/* size_t	ft_strlen(const char *s)
{
	int	i;
	// char *str2;
	i = 0;
	// str2 = (char*)str;

	char *str2;
	str2 = (char *)s;

	while (str2[i] != '\0')
	{
		i++;
	}
	return (i);
} */

// int main(void)
// {
//     const char *p = strrchr( "abcdef", 'd');
//     if ( p == NULL )
//     {
//         puts( "見つからない。" );
//     }
//     else
//     {
//         puts( p );
//     }

//     printf("-----------------\n");
//     const char *s = ft_strrchr( "abcdef", 'd' );

//     if ( s == NULL )
//     {
//         puts( "見つからない。" );
//     }
//     else
//     {
//         puts(s);
//     }

// }