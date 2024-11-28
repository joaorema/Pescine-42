/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 12:52:15 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/05 13:09:46 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	inicio;

	inicio = 'a';
	while (inicio <= 'z')
	{
		write (1, &inicio, 1);
		inicio++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
