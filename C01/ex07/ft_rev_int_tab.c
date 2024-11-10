/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:31:34 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/07 13:07:49 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	inicio;
	int	fim;
	int	temp;

	inicio = 0;
	fim = (size -1);
	while (inicio < fim)
	{
		temp = tab[inicio];
		tab[inicio] = tab[fim];
		tab[fim] = temp;
		inicio++;
		fim--;
	}
}
