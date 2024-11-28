/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:08:54 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/10 10:27:30 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 122 || str[i] < 97)
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
    char *test2 = "Hello";
    char *test3 = "";

    printf("Test 1: %i\n", ft_str_is_lowercase(test1)); // Should print 1
    printf("Test 2: %i\n", ft_str_is_lowercase(test2)); // Should print 0
    printf("Test 3: %i\n", ft_str_is_lowercase(test3)); // Should print 1

    return 0;
}
*/
