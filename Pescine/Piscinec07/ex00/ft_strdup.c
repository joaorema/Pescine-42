/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:18:59 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/18 11:34:41 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	ft_stringlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_stringlen(src) + 1);
	if (!new)
	{
		return (NULL);
	}
	while (*src)
	{
		new[i++] = *src++;
		new[i] = '\0';
	}
	return (new);
}
/*
#include <stdio.h>
int main(int argc, char *argv[])
{
	char *our;

	if(argc == 2)
	{
		our = ft_strdup(argv[1]);
		printf("%s\n" , our);
	}
	return (0);
}
*/
