/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 12:23:18 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/15 12:23:19 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;
	int		x;

	len = 0;
	x = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	cpy = (char *) malloc(len + 1);
	if (cpy == NULL)
	{
		return (NULL);
	}
	else
	{
		while (src[x] != '\0')
		{
			cpy[x] = src[x];
			x++;
		}
		cpy[x] = '\0';
	}
	return (cpy);
}

/*int	main(void)
{
	char *src = "Testtte!";

	printf("%s", ft_strdup(src));
	return (0);
}*/
