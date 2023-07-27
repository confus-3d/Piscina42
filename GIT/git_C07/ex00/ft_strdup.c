/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:13:10 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/27 14:35:56 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		counter;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	dst = (char *)malloc((counter + 1) * sizeof(char));
	while (counter >= 0)
	{
		dst[counter] = src[counter];
		counter--;
	}
	return (dst);
}
/*
int	main(void)
{
	char src[10] = "Piscina";
	
	printf("%s", ft_strdup(src));
}
*/
