/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:54:33 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 21:32:41 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	alpha;
	int	count;

	alpha = 1;
	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] < 32 || str[count] > 126)
			alpha = 0;
		count++;
	}
	return (alpha);
}
/*
int	main(int argc, char **argv)
{
	ft_str_is_printable(argv[1]);
}
*/
