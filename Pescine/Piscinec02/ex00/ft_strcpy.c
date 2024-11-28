/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:38:50 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/09 17:24:40 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
char	*ft_strcpy(char *dest, char *src)
{
	int	letra;

	letra = 0;
	while (src[letra] != '\0')
	{
		dest[letra] = src[letra];
		letra++;
	}
	dest[letra] = '\0';
	return (dest);
}
/*
int main(void)
{
    char src[] = "Hello, world!";
    char dest[50];

    ft_strcpy(dest, src);
    printf("texto copiado: %s\n", dest);

    return 0;
}
*/
