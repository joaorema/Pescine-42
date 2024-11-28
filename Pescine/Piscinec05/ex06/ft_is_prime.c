/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:31:54 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/16 15:54:31 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
    int number = 199;
    if (ft_is_prime(number))
    {
        printf("%i is a prime number.\n", number);
    }
    else
    {
        printf("%i is not a prime number.\n", number);
    }
    return 0;
}
*/
