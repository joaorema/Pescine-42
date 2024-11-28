/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:19:36 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/18 14:35:44 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	result = (int *)malloc(sizeof(int) * (i));
	if (! result)
	{
		*range = NULL;
		return (-1);
	}
	*range = result;
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int main(void)
{
    int *range;
    int size = ft_ultimate_range(&range, 1, 10);

    if (size == -1)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    else if (size == 0)
    {
        printf("Invalid range.\n");
        return 1;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%i ", range[i]);
    }
    printf("\n");

    free(range);
    return 0;
}
*/
