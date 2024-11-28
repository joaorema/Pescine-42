/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:55:55 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/09 18:58:01 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* #include <stdio.h> */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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
    char *test1 = "Hello";
    char *test2 = "Hello123";
    
    printf("%i\n", ft_str_is_alpha(test1)); // Should print 1
    printf("%i\n", ft_str_is_alpha(test2)); // Should print 0
    
    return 0;
}
*/		
