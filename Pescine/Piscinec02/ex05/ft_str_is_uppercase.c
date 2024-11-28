/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:31:08 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/10 10:40:36 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 90 || str[i] < 65)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void)
{
    char *test1 = "hello";
    char *test2 = "HELLO";
    char *test3 = "";

    printf("Test 1: %i\n", ft_str_is_uppercase(test1)); // Should print 0
    printf("Test 2: %i\n", ft_str_is_uppercase(test2)); // Should print 1
    printf("Test 3: %i\n", ft_str_is_uppercase(test3)); // Should print 1

    return 0;
}
*/
