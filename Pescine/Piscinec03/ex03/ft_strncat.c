/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:59:49 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/12 12:48:02 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				end;
	unsigned int	copy;

	end = 0;
	copy = 0;
	while (dest[end] != '\0')
	{
		end++;
	}
	while (src[copy] != '\0' && copy < nb)
	{
		dest[end] = src[copy];
		end++;
		copy++;
	}
	dest[end] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[50] = "Hello , ";
	char src[] = "how are you doing? ";
	ft_strncat(dest, src, 30);
	printf("%s\n" , dest);
	return (0);
}
*/
