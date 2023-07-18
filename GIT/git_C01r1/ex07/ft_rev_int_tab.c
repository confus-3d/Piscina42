/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:09:07 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 17:02:42 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	counter;

	counter = 0;
	while (counter < size / 2)
	{
		swap = tab[size - 1 - counter];
		tab[size - 1 - counter] = tab[counter];
		tab[counter] = swap;
		counter++;
	}
}
/*
int	main(void)
{
	int	numeros[5];
	int prueba;

	prueba = 0;
	numeros[0] = 23;
	numeros[1] = 45;
	numeros[2] = 32;
	numeros[3] = 8;
	numeros[4] = 3;
	ft_rev_int_tab(numeros, 5);
	while (prueba < 5)
	{
		printf("%d", numeros[prueba]);
		printf("\n");
		prueba++;
	}
}
*/
