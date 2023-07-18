/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:27:43 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/12 15:47:30 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

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
	return (dest);
}
/*
int	main(void)
{
	char	src[100] = "cacafuti";
	char	dest[100] = "42";

	ft_strncpy(dest, src, 35);
	printf("%s", dest);
}
*/
