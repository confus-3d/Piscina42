/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:27:43 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 21:11:03 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
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
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "cacafuti";
	char	dest[] = "42";

	ft_strncpy(dest, src, 20);
	printf("%s", dest);
}
*/
