/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:59:33 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/27 14:36:20 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	counter;
	int	*solve;

	counter = 0;
	if (min >= max)
		return ((void *)0);
	while ((min + counter) < max)
		counter++;
	solve = (int *)malloc(counter * sizeof(int));
	while (counter > 0)
	{
		solve[counter - 1] = max - 1;
		max--;
		counter--;
	}
	return (solve);
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 38;
	y = 47;
	
	ft_range(x, y);
}
*/
