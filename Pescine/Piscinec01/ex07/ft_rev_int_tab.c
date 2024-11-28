/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:22:27 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/09 11:58:32 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	fim;
	int	temp;

	inicio = 0;
	fim = size - 1;
	while (inicio < fim)
	{
		temp = tab[inicio];
		tab[inicio] = tab[fim];
		tab[fim] = temp;
		inicio++;
		fim--;
	}
}
