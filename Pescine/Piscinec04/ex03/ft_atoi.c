/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:27:34 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/14 14:33:20 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	count_signs(char *str, int *i)
{
	int	odd_even;

	odd_even = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			odd_even++;
		(*i)++;
	}
	return (odd_even);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	odd_even;

	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	odd_even = count_signs(str, &i);
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (odd_even % 2 != 0)
	{
		result = -result;
	}
	return (result);
}
/*
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("%s\n", argv[0]);
        return 1;
    }
    printf("%d\n", ft_atoi(argv[1]));
    return 0;
}
*/
