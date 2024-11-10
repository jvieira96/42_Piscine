/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:40:56 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/09 20:06:22 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*dest_start;

	dest_start = dest;
	while (n > 0)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
		n--;
	}
	return (dest_start);
}

/*int	main(void)
{
	char			dest[6];
	char			*src;
	unsigned int	n;

	src = "Hello";
	n = 7;
	ft_strncpy(dest, src, n);
	write(1, dest, n);
	return (0);
}*/
