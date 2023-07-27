/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:59:33 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/27 14:16:59 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_ultimate_range(int **range, int min, int max)
{
	int	counter;

	counter = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	while ((min + counter) < max)
		counter++;
	*range = (int *)malloc(counter * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (counter > 0)
	{
		(*range)[counter - 1] = max - 1;
		max--;
		counter--;
	}
	return (counter);
}
/*
int	main(void)
{
	int	x;
	int	y;
	int *array;

	x = 38;
	y = 47;
	
	ft_ultimate_range(&array, x, y);
}
*/
