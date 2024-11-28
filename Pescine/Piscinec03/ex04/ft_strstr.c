/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:55:28 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/12 13:11:54 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
    char str[] = "Hello, how are you?";
    char to_find[] = "how";
    char *result = ft_strstr(str, to_find);
    if (result != NULL)
    {
        printf("Found: %s\n", result);
    }
    else
    {
        printf("Not found\n");
    }
    return 0;
}
*/
