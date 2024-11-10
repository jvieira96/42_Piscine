/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:42:10 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/09 14:01:17 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
			break ;
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str;
	int		result;
	char	result_char;

	str = "";
	result = ft_str_is_printable(str);
	result_char = result + '0';
	write(1, &result_char, 1);
	return (0);
}*/
