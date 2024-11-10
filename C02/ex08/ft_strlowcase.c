/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:42:29 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/09 15:50:50 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	char	*str_address;

	str_address = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	str = str_address;
	return (str);
}

/*int	main(void)
{
	char	str[] = "HELLO";
	char	*new_str;

	new_str = ft_strlowcase(str);
	write(1, new_str, 5);
}*/
