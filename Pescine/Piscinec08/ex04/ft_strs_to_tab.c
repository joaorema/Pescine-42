/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:57:29 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/23 15:08:01 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	char	*d;

	i = 0;
	d = (char *)malloc(ft_strlen(src) * sizeof(char) + 1);
	dest = d;
	if (!d)
	{
		return (0);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*array;
	struct s_stock_str	*d;

	d = malloc((ac + 1) * sizeof(struct s_stock_str));
	array = d;
	if (!d)
	{
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i].str = 0;
	array[i].copy = 0;
	return (array);
}
/*
#include <stdio.h>
#include "ft_stock_str.h"
int	main(int argc, char **argv)
{
	int					index;
	struct s_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
 { 
 printf("%d\n", index);
 printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
 printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
 printf("\t|     size : %d\n", structs[index].size);
 index++;
 }
}
*/
