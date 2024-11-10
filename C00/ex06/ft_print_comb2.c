/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:42:01 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/17 13:42:03 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_write((n1 / 10) + '0');
			ft_write((n1 % 10) + '0');
			ft_write(' ');
			ft_write((n2 / 10) + '0');
			ft_write((n2 % 10) + '0');
			if (!(n1 == 98 && n2 == 99))
			{
				ft_write(',');
				ft_write(' ');
			}
			n2++;
		}
		n1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
