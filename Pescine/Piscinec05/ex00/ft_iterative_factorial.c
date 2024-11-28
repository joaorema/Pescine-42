/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:50:00 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/16 12:10:16 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		result *= nb;
		--nb;
	}
	return (result);
}

#include <stdio.h>
int	main()
{
	for (int i = 0; i < 15; i++)
		printf("%d -> %d\n", i, ft_iterative_factorial(i));
}

