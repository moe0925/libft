#include  "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i;
	char *s2;
	char *p;
	char *set;
	s2 = (char *)s1;
	p = (char*)malloc(sizeof(char) * ft_strlen(s2));
	if (!p)
		return (NULL);

	i = 0;
	while (s2 != '\0')
	{
		if (s2[i] == set[0])
		{
			j = 1;
			while (set[j] != '\0' && set[j] == s2[i])
			{
				j++;
				
				if (set[j] == '\0')
					return (&str[i]);
			}

		}

		p[i] = s2[i]
		i++; 
	}
	return (p);

}


#include < publib.h >

int main(void) {
        文字行[512];

        while (fgets(line, sizeof(line), stdio) != NULL) {
                strtrim(行);
                printf("%s", 行);
        }
        0 を返します。
}
 
