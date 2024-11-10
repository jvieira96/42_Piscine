/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:54:42 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/09 13:41:08 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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

	str = "SAS";
	result = ft_str_is_uppercase(str);
	result_char = result + '0';
	write(1, &result_char, 1);
	return (0);
}*/
