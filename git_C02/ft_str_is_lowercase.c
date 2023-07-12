/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:54:33 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 21:28:18 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	alpha;
	int	count;

	alpha = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'a' || str[count] > 'z')
			alpha = 0;
		count++;
	}
	return (alpha);
}
/*
int	main(int argc, char **argv)
{
	ft_str_is_lowercase(argv[1]);
}
*/
