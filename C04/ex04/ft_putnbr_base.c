/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 12:08:39 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/21 12:08:41 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

int	ft_atoi(char *number)
{
	int	i;
	int	sign;
	int	n;

	sign = 1;
	i = 0;
	n = 0;
	while (number[i] == ' ' || number[i] == '\t' || number[i] == '\n'
		|| number[i] == '\f' || number[i] == '\r')
		i++;
	if ((number[i] == '-') || (number[i] == '+'))
	{
		if (number[i] == '-')
			sign = -1;
		i++;
	}
	while (number[i] != '\0')
	{
		if (number[i] >= '0' && number[i] <= '9')
		{
			n = n * 10 + number[i] - '0';
			i++;
		}
	}
	return (n * sign);
}

int	ft_doublechar(char *baseSymbols)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (baseSymbols[i] != '\0')
	{
		x = i + 1;
		while (baseSymbols[x] != '\0')
		{
			if (baseSymbols[i] == baseSymbols[x])
			{
				return (1);
			}
			x++;
		}
		i++;
	}
	return (0);
}

void	ft_printnbr(int nbr, char *symbols, int symbols_len)
{
	long	nlong;

	nlong = nbr;
	if (nlong < 0)
	{
		nlong = nlong * -1;
		ft_putchar('-');
	}
	if (nlong >= symbols_len)
		ft_printnbr(nlong / symbols_len, symbols, symbols_len);
	ft_putchar(symbols[nlong % symbols_len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return ;
		base_len++;
	}
	if (base_len < 2)
		return ;
	if (ft_doublechar(base))
		return ;
	ft_printnbr(nbr, base, base_len);
}

int	main(int argc, char *argv[])
{
	int	n;
	char	*baseSymbols;
	
	n = ft_atoi(argv[1]);
	baseSymbols = argv[2];
	ft_putnbr_base(n, baseSymbols);
	return (0);
}
