/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:08:10 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/14 17:08:13 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	count;
	int	result;

	result = 0;
	count = nb;
	if ((nb == 0) || (nb == 1))
		return (0);
	while (count > 0)
	{
		if (nb % count == 0)
			result++;
		count--;
	}
	if (result == 2)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	nb = 5;
	
	printf("%d", ft_is_prime(nb));
}*/
