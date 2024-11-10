/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:20:57 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/09 12:42:34 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9' ))
		{
			return (0);
			break ;
		}
		str++;
	}
	return (1);
}

/*int	main(int argc, char *argv[])
{
	printf("%d", ft_str_is_numeric(argv[1]));
	return (0);
}*/
