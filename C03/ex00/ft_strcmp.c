/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 21:49:17 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/10 12:18:33 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	dif;

	dif = 0;
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		if (*s1 != *s2)
		{
			dif = *s1 - *s2;
			break ;
		}
		s1++;
		s2++;
	}
	return (dif);
}

/*int	main(void)
{
	char	s1[] = "OLa";
	char	s2[] = "OlA";
	int	result;

	result = ft_strcmp(s1, s2);
	printf("%d", result);
}*/
