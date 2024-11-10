/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:19:20 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/15 13:19:23 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*number;
	int	tamanho;
	int	x;

	x = 0;
	tamanho = max - min;
	if (tamanho <= 0)
	{
		return (NULL);
	}
	number = (int *) malloc(4 * tamanho);
	if (number == NULL)
	{
		return (NULL);
	}
	else
	{
		while (min < max)
		{
			number[x] = min;
			min++;
			x++;
		}
		return (number);
	}
}

/*void	ft_print(int *result, int size)
{
	int	x;
	
	x = 0;
	while (size > 0)
	{
		printf("%d", result[x]);
		x++;
		size--;
	}
}

int	main(void)
{
	int	min = 3;
	int	max = 6;
	int	size = max - min;
	int	*result;
	
	result = ft_range(min,max);
	if (result == NULL)
	{
		printf("NULL");
	}
	else
	{
		ft_print(result, size);
	}
	return (0);
}*/
