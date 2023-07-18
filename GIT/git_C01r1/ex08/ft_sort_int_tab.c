/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:09:07 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 19:31:24 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (counter2 < size)
	{
		swap = tab[counter2];
		while (counter1 < size)
		{
			if (tab[counter1] < swap)
			{
				swap = tab[counter1];
				tab[counter1] = tab[counter2];
				tab[counter2] = swap;
			}
			counter1++;
		}
		tab[counter2] = swap;
		counter2++;
		counter1 = counter2;
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
	ft_sort_int_tab(numeros, 5);
	while (prueba < 5)
	{
		printf("%d", numeros[prueba]);
		printf("\n");
		prueba++;
	}
}
*/
