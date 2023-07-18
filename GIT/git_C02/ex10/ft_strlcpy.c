/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:27:43 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/12 15:47:41 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	srccount;

	count = 0;
	srccount = 0;
	while (src[srccount])
		srccount++;
	while (src[count] != '\0' && size != 0)
	{
		dest[count] = src[count];
		count++;
		size--;
	}
	dest[count] = '\0';
	return (srccount);
}
/*
int	main(void)
{
	char	src[] = "cacafuti";
	char	dest[] = "42";

	ft_strlcpy(dest, src, 20);
	printf("%s", dest);
}
*/
