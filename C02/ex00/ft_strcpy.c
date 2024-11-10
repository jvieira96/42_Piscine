/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 15:15:27 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/08 16:27:04 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

char	*ft_strcpy(char	*dest, char	*src)
{
	char	*dest_start;

	dest_start = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_start);
}

/*int main(void)
{
	char *src;
	char	dest[6];

	src = "Hello";
	ft_strcpy(dest, src);
	write(1, dest, 5);
	return (0);
}*/
