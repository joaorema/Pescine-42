/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:52:25 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/10 11:06:48 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 126 || str[i] < 32)
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
    char *test2 = "";
    char *test3 = "Hello\nWorld";

    printf("Test 1: %i\n", ft_str_is_printable(test1)); // Should print 1
    printf("Test 2: %i\n", ft_str_is_printable(test2)); // Should print 1
    printf("Test 3: %i\n", ft_str_is_printable(test3)); // Should print 0
   
    return 0;
}
*/
