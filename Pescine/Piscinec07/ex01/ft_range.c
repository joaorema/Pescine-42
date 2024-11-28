/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:15:19 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/18 13:28:41 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	result = (int *)malloc(sizeof(int) * (i));
	if (! result)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int main(void)
{
    int min = 1;
    int max = 5;
    int *range = ft_range(min, max);

    if (range == NULL)
    {
        printf("Invalid range or memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < max - min; i++)
    {
        printf("%i ", range[i]);
    }
    printf("\n");

    free(range);
    return 0;
}
*/
