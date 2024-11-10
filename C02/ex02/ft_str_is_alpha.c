/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:31:13 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/08 21:43:10 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			if (!(*str >= 'A' && *str <= 'Z'))
			{
				return (0);
				break ;
			}
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;
	int	result;
	char	result_char;

	str = "";
	result = ft_str_is_alpha(str);
	result_char = result + '0';
	write(1, &result_char, 1);
	return (0);
}*/
