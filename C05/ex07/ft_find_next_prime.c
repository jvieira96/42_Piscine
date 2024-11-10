/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:27:40 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/14 17:27:43 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	count;
	int	result;

	count = nb;
	result = 0;
	while (count > 0)
	{
		if (nb % count == 0)
			result++;
		count--;
	}
	if (result == 2)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

/*int	main(void)
{
	int	nb = 6;
	
	printf("%d", ft_find_next_prime(nb));
}*/
