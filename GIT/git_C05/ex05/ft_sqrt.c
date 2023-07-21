/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:42:07 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/21 10:59:44 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	unsigned int	square;
	unsigned int	number;

	number = nb;
	square = 1;
	if (nb > 0)
	{
		while ((square * square) <= number)
		{
			if ((square * square) == number)
				return (square);
			square++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	printf("%i\n", ft_sqrt(2147483647));
}
*/
