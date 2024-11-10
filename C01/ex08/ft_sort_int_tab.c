/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:19:38 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/07 14:17:39 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int	*tab, int size)
{
	int	i;
	int	x;
	int	temp;

	i = 0;
	while (i < size -1)
	{
		x = 0;
		while (x < size -1)
		{
			if (tab[x] > tab[x + 1])
			{
				temp = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = temp;
			}
			x++;
		}
		i++;
	}
}
