/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:54:57 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/17 20:21:14 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;
	int	compare;

	counter = -1;
	compare = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[++counter])
	{
		compare = 0;
		while (str[counter + compare] == to_find[compare])
		{
			compare++;
			if (to_find[compare] == '\0')
			{
				str = &str[counter];
				return (str);
			}
		}
	}
	return (0);
}
/*
int	main(void)
{
	char	str[50] = "Casa Hola Perro";
	char	to_find[50] = "\0";
	char	str1[50] = "Casa Hola Perro";
	char	to_find1[50] = "\0";

	printf("%s\n", ft_strstr(str, to_find));
	printf("%s", strstr(str1, to_find1));
}
*/
