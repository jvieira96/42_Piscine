/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:46:58 by jpedro-f          #+#    #+#             */
/*   Updated: 2024/09/15 16:47:01 by jpedro-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_len_strs(char **strs, int size)
{
	int	len;
	int	i;
	int	x;

	i = 0;
	x = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][x] != '\0')
		{
			len++;
			x++;
		}
		i++;
		x = 0;
	}
	return (len);
}

int	ft_len_sep(char	*sep)
{
	int	len;
	int	x;

	len = 0;
	x = 0;
	while (sep[x] != '\0')
	{
		len++;
		x++;
	}
	return (len);
}

char	*ft_cpy_str(char	**strs, char *final_str, int i)
{
	int	x;
	int	k;

	x = 0;
	k = 0;
	while (final_str[x] != '\0')
	{
		x++;
	}
	while (strs[i][k] != '\0')
	{
		final_str[x] = strs[i][k];
		x++;
		k++;
	}
	final_str[x] = '\0';
	return (final_str);
}

char	*ft_cpy_sep(char *final_str, char *sep)
{
	int	x;
	int	i;

	x = 0;
	i = 0;
	while (final_str[x] != '\0')
	{
		x++;
	}
	while (sep[i] != '\0')
	{
		final_str[x] = sep[i];
		x++;
		i++;
	}
	final_str[x] = '\0';
	return (final_str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_strs;
	int		len_sep;
	char	*final_str;
	int		total_len;
	int		i;

	if (size <= 0)
		return (final_str = (char *) malloc(1));
	len_strs = ft_len_strs(strs, size);
	len_sep = ft_len_sep(sep);
	total_len = len_strs + len_sep * (size - 1) + 1;
	final_str = (char *) malloc(total_len);
	i = 0;
	while (i < size)
	{
		final_str = ft_cpy_str(strs, final_str, i);
		if (i < size - 1)
		{
			final_str = ft_cpy_sep(final_str, sep);
		}
		i++;
	}
	final_str[total_len] = '\0';
	return (final_str);
}

/*int	main(void)
{
	char	*strs[] = { "Hello", "ola", "adeus"};
	char	*sep = "||";
	int	size = 3;
	
	         printf("%s", ft_strjoin(size, strs, sep));
}*/
