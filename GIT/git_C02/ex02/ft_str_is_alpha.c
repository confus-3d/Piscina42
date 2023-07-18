/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:54:33 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 21:20:49 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	alpha;
	int	count;

	alpha = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 'A')
			alpha = 0;
		if (str[count] > 'Z' && str[count] < 'a')
			alpha = 0;
		if (str[count] > 'z')
			alpha = 0;
		count++;
	}
	return (alpha);
}
/*
int	main(int argc, char **argv)
{
	ft_str_is_alpha(argv[1]);
}
*/
