/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:57:54 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/13 11:32:59 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	copy;

	counter = 0;
	copy = 0;
	while (dest[counter] != '\0')
		counter++;
	while (src[copy] != '\0')
	{
		dest[counter + copy] = src[copy];
		copy++;
	}
	dest[counter + copy] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[50] = "hola ";
	char	src[50] = "MUNDO";
	char	dest1[50] = "hola ";
	char	src1[50] = "MUNDO";
	printf("%s\n", ft_strcat(dest, src));
	printf("%s", strcat(dest1, src1));
}
*/