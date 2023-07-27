/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:20:42 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/27 18:57:40 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	ft_strlen_string(char **str, int size)
{
	int	count;
	int	i;
	int	j;

	count = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	length;

	length = 0;
	while (src[length] != '\0')
	{
		dest[length] = src[length];
		length++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*solve;
	int		i;
	int		k;

	i = 0;
	k = 0;
	len = ft_strlen_string(strs, size) + (ft_strlen(sep) * (size - 1));
	solve = malloc(sizeof(char) * (len + 1));
	while (i < size)
	{
		ft_strcpy(&solve[k], strs[i]);
		k += ft_strlen(strs[i]);
		if (i != (size - 1))
		{
			ft_strcpy(&solve[k], sep);
			k += ft_strlen(sep);
		}
		i++;
	}
	solve[k] = '\0';
	return (solve);
}
/*
int	main(void)
{
	char *strs[] = {"Hola","caracola","string"};
	char *sep = "- - -";
	int	size = 3;
	
	printf("%s", ft_strjoin(size, strs, sep));
}
*/
