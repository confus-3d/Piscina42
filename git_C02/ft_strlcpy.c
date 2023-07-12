/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:27:43 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 23:08:19 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	count;

	count = 0;
	while (src[count] != '\0' && n != 0)
	{
		dest[count] = src[count];
		count++;
		n--;
	}
	while (n != 0)
	{
		dest[count] = '\0';
		count++;
		n--;
	}
	return (size);
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
