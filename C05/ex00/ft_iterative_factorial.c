/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 12:36:01 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/13 12:36:04 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = nb;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb >= 2)
	{
		fact = fact * (nb - 1);
		nb--;
	}
	return (fact);
}

/*int	main(void)
{
	int	nb;
	
	nb = 6;
	printf("%d", ft_iterative_factorial(nb));
}*/
