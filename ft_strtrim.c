/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 15:02:54 by moeota       #+#    #+#             */
/*   Updated: 2022/11/06 15:02:54 by moeota      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int check(char c, char *set);


int index_frontcount(char *str2,char *set2)
{
    int i;
    int tmp;
   
    i = 0;
    while (str2[i] != 0 )
    {
        if (check(str2[i],set2) == 1)
		{
            tmp = i;
			return (tmp);
		}
        i++;
    }
    return (0);
}

int index_backcount(char *str2,char *set2)
{
    int len;
    int tmp;

    len = ft_strlen(str2) - 2;
    while(len >= 0)
    {
        if (check(str2[len],set2) == 1)
		{
            tmp = len;
			return (tmp);
		}
        len--;
    }
    return (0);
}


int check(char c, char *set)
{
    int i;

    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (0);
        i++;
    }
	return (1);
}


char *ft_strtrim(char const *s1, char const *set)
{
	char	*target;
	char	*str2;
	char	*set2;
    int     i;
    int     start;
    int     end;

	if (!s1 || !set)
		return (NULL);
	str2 = (char *)s1;
	set2 = (char *)set;

    start = index_frontcount(str2,set2);
    end = index_backcount(str2,set2);

	target = ft_calloc(start - end + 1, sizeof(char));
	if (!(target))
		return (NULL);
	i = start;
	while (i <= end)
	{
		target[i - start] = str2[i];
		i++;
	}
	return(target);
}

// int main ()
// {
// 	char *str = "123421";
// 	char *set = "12";
// 	ft_strtrim(str,set);
// 	printf("%s",ft_strtrim(str, set));
// }

// int main(void) {
//         文字行[512];

//         while (fgets(line, sizeof(line), stdio) != NULL) {
//                 strtrim(行);
//                 printf("%s", 行);
//         }
//         0 を返します。
// }
 
