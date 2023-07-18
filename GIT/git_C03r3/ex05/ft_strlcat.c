/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:57:54 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/17 20:19:47 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	counter2;
	unsigned int	copy;

	counter = 0;
	counter2 = 0;
	copy = 0;
	while (dest[counter] != '\0')
		counter++;
	if (size == 0)
		return (counter);
	while (src[counter2] != '\0')
		counter2++;
	while (src[copy] != '\0' && (counter + copy) < (size - 1))
	{
		dest[counter + copy] = src[copy];
		copy++;
	}
	if (counter <= size)
		dest[counter + copy] = '\0';
	return (counter + counter2);
}
/*
int	main(void)
{
	char	dest[10] = "";
	char	src[] = "";
	char	dest1[10] = "";
	char	src1[] = "";
	unsigned int	size = 1;
	printf("%u\n", ft_strlcat(dest, src, size));
	printf("%lu\n", strlcat(dest1, src1, size));
	printf("%s\n", dest);
	printf("%s", dest1);
}
*/
