/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:05:49 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/10 16:05:52 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*address_dest;

	address_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (address_dest);
}

/*int	main(void)
{
	char		src[] = "tudo bem?";
	char		dest[50] = "Ola, ";
	unsigned int	nb = 3;
	
	printf("%s", ft_strncat(dest, src, nb));
	return (0);
}*/
