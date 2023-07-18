/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:33:43 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/13 19:00:25 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	unsigned int	copy;

	counter = 0;
	copy = 0;
	while (dest[counter])
		counter++;
	while (src[copy] && copy < nb)
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
char    dest[50] = "hola ";
char    src[50] = "MUNDO";
char    dest1[50] = "hola ";
char    src1[50] = "MUNDO";
printf("%s\n", ft_strncat(dest, src, 4));
printf("%s", strncat(dest1, src1, 4));
}
*/
