/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moeota <moeota@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 22:58:02 by moeota            #+#    #+#             */
/*   Updated: 2022/11/07 22:58:03 by moeota           ###   ########.fr       */
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
    return (-1);
}

int index_backcount(char *str2,char *set2)
{
    int len;
    int tmp;

    len = ft_strlen(str2) - 1;
    tmp = len;
    while(len >= 0)
    {
        if (check(str2[len],set2) == 1)
		{
			return (len);
		}
        len--;
    }
    return (tmp);
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

	if (!(s1) || !(set))
		return (NULL);
    // if (s1[0] == 0 && set[0] == 0)
    //     return (NULL);
	str2 = (char *)s1;
	set2 = (char *)set;
    start = index_frontcount(str2,set2);
    end = index_backcount(str2,set2);
    if ((start == -1 && end == 0 ) || s1[0] == 0)
        {
            target = ft_calloc(1,sizeof(char));
            return (target);
        }
	target = ft_calloc(end - start + 2, sizeof(char));

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
// 	char *str = "";
// 	char *set = "";
// 	ft_strtrim(str,set);
// 	printf("%s",(ft_strtrim(str, set)));
// }
