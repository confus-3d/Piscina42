/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:59:33 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/27 15:06:53 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	counter;
	int	i;

	i = 0;
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
	while (i < counter)
	{
		(*range)[i] = min;
		min++;
		i++;
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
