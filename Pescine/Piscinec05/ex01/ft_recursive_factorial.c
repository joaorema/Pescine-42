/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:14:07 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/16 12:32:30 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}
/*
#include <stdio.h>

int main()
{
	for(int i = 1; i <= 10; i++)
	printf("%d -> %d\n", i, ft_recursive_factorial(i));
}
*/
