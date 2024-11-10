/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:38:32 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/14 16:38:41 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	low;
	int	high;
	int	mid;

	high = nb;
	low = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (0);
}

/*int	main(void)
{
	int	nb = 9;
	
	printf("%d", ft_sqrt(nb));
}*/
