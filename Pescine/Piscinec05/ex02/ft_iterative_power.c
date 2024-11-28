/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:38:56 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/16 12:58:18 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 0)
	{
		result *= nb;
		--power;
	}
	return (result);
}
/*
#include <stdio.h>
int main()
{
	for(int i = 1; i <= 10; i++)
	printf("2^%d->%d\n", i, ft_iterative_power(2, i));
}
*/
