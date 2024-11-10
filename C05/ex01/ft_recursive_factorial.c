/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:46:52 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/13 11:46:54 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

/*int	main(void)
{
	int	nb;
	
	nb = 6;
	printf("%d", ft_recursive_factorial(nb));
	return (0);
}*/
