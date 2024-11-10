/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:44:30 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/18 18:44:32 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		x = 0;
		while (to_find[x] == str[i + x] && str[i + x] != '\0')
		{
			x++;
		}
		if (to_find[x] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char *str = "ola estou na piscine da 42";
	char *to_find = "4232";
	
	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
