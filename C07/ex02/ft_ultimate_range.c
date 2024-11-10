/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:59:35 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/15 15:59:37 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	x;
	int	result;

	x = 0;
	result = max - min;
	if ((max - min) <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(4 * result);
	if (*range == NULL)
	{
		return (-1);
	}
	while (min < max)
	{
		(*range)[x] = min;
		min++;
		x++;
	}
	return (result);
}

/*int	main(void)
{
	int	min = 0;
	int	max = 0;
	int	*range = NULL;
	
	printf("%d", ft_ultimate_range(&range,min,max));
}*/
