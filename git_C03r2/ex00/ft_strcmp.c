/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:58:19 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/13 16:18:27 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	compare;

	compare = 0;
	while ((unsigned char)s1[compare] == (unsigned char)s2[compare]
		&& s1[compare] != '\0')
		compare++;
	return ((unsigned char)s1[compare] - (unsigned char)s2[compare]);
}
/*
int	main(void)
{
	printf("%d", ft_strcmp("adioñ", "adios"));
	printf("%d", strcmp("adioñ", "adios"));
}
*/
