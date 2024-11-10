/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:27:53 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/10 18:27:56 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *numero, int i)
{
	int	x;	

	x = i - 1;
	while (x >= 0)
	{
		write(1, &numero[x], 1);
		x--;
	}
}

void	ft_nbpositive(char *numero, int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		numero[i] = (nb % 10) + '0';
		nb = nb / 10;
		i++;
	}
	ft_write(numero, i);
}

void	ft_putnbr(int nb)
{
	char	numero[11];

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}
	ft_nbpositive(numero, nb);
}

/*int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/
