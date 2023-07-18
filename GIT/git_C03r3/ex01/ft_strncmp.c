/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:58:19 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/17 18:50:20 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	compare;

	compare = 0;
	while (s1[compare]
		&& (unsigned char)s1[compare] == (unsigned char)s2[compare]
		&& compare < (n - 1))
	{
		compare++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[compare] - (unsigned char)s2[compare]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("iHello", "Hello", -12));
	printf("%d\n", strncmp("iHello", "Hello", -12));
}
*/
