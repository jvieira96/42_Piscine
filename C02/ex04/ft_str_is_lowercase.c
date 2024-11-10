/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:44:03 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/09 12:52:32 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
			break ;
		}
		str++;
	}
	return (1);
}

/*int	main(int agrc, char *argv[])
{
	printf("%d", ft_str_is_lowercase(argv[1]));

	return (0);
}*/
