/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:02:01 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/09 20:14:55 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strupcase(char *str)
{
	char	*str_address;

	str_address = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	str = str_address;
	return (str);
}

/*int	main(void)
{
	char	str[] = "hello";
	char	*new_str;

	new_str = ft_strupcase(str);
	write(1, new_str, 5);
}*/
