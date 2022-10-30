#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *p; 
    int i;
    int len;
    char *s2;
    s2 = (char*)s;

    if (!s || !f)
        return (NULL);
    i = 0;
    len = ft_strlen(s);
    p = malloc(sizeof(char)*(len +1));
    if (!(p))
        return(NULL);
    while (i <len)
    {
        p[i] = f(i,s2[i]);
        i++;
    }
    p[i] = '\0';
    return (p);
}