/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:57:28 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/10 12:32:15 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char test1[] = "HELLO";
	char test2[] = "TeStE";

	printf("Test 1: %s\n", ft_strlowcase(test1)); // imprime hello
	printf("Test 2: %s\n", ft_strlowcase(test2)); // imprime teste
}
*/
