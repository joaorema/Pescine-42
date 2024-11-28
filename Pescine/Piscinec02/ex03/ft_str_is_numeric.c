/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:35:08 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/09 19:56:19 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
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
    char *test1 = "12345";
    char *test2 = "123a45";
    char *test3 = "";

    printf("%i\n", ft_str_is_numeric(test1)); // Should print 1
    printf("%i\n", ft_str_is_numeric(test2)); // Should print 0
    printf("%i\n", ft_str_is_numeric(test3)); // Should print 1

    return 0;
}				
*/
