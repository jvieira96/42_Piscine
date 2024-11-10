/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:19:46 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/10 14:19:49 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	dif;

	dif = 0;
	while (n > 0)
	{
		if ((*s1 != *s2) || (*s1 == '\0') || (*s2 == '\0'))
		{
			dif = *s1 - *s2;
			break ;
		}
		s1++;
		s2++;
		n--;
	}
	return (dif);
}

/*int	main(void)
{ 
	char		s1[] = "Casa";
	char		s2[] = "Casame";
	unsigned int	size = 3;
	int		result;

	result = ft_strncmp(s1, s2, size);
	printf("%d", result);
}*/
