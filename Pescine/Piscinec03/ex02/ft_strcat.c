/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:10:29 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/12 11:12:32 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	dest_end;
	int	src_copy;

	dest_end = 0;
	src_copy = 0;
	while (dest[dest_end] != '\0')
	{
		dest_end++;
	}
	while (src[src_copy] != '\0')
	{
		dest[dest_end] = src[src_copy];
		dest_end++;
		src_copy++;
	}
	dest[dest_end] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "World!";
	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
*/
