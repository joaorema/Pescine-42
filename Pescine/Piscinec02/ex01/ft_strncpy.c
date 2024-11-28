/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:28:36 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/09 17:54:30 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	letra;

	letra = 0;
	while (src[letra] != '\0' && letra < n)
	{
		dest[letra] = src[letra];
		letra++;
	}
	while (letra < n)
	{
		dest[letra] = '\0';
		letra++;
	}
	return (dest);
}
/*
int main(void)
{
    char src[] = "Hello, world!";
    char dest[50];

    ft_strncpy(dest, src, 13);
    printf("Texto Copiado: %s\n", dest);

    return 0;
}
*/
