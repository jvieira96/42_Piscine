/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:41:38 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/10 15:41:40 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*address_dest;

	address_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (address_dest);
}

/*int	main(void)
{
	char	src[] = "tudo bem?";
	char	dest[50] = "Ola, ";
	
	printf("%s", ft_strcat(dest, src));
	return (0);
}*/
