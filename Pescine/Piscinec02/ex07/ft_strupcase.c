/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:10:01 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/10 11:24:46 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
/*
int 	main(void)
{
	char test1[] = "hello";
	char test2[] = "TeStE";

	printf("Test 1: %s\n", ft_strupcase(test1)); // imprime HELLO
	printf("Test 2: %s\n", ft_strupcase(test2)); // imprime TESTE

	return (0);
}
*/
