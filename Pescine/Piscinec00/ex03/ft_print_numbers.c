/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:33:27 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/05 17:33:31 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	inicio;

	inicio = '0';
	while (inicio <= '9')
	{
		write(1, &inicio, 1);
		inicio++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
