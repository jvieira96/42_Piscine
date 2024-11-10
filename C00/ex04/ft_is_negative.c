/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:03:56 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/05 17:50:21 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	resultado;

	if (n < 0)
	{
		resultado = 'N';
		write(1, &resultado, 1);
	}
	else
	{
		resultado = 'P';
		write(1, &resultado, 1);
	}
}

/*int	main(void)
{
	ft_is_negative(0);
	return (0);
}*/
