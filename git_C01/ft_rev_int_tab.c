/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 07:53:59 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 12:00:37 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	counter;
	int	cache[s];

	s = size;

	counter = 0;
	while (counter < size)
	{
		cache[counter] = tab[counter];
		counter++;
	}
	counter = 0;
	while (size != 0)
	{
		tab[counter] = cache[size - 1];
		size--;
		counter++;
	}
}

int	main(void)
{
	int	string[3];
	int	size;
	int	numero;

	string[0] = 1;
	string[1] = 2;
	string[2] = 3;
	size = 3;
	ft_rev_int_tab(&string[0], size);
	size = 3;
	numero = 0;
	while (numero != size)
	{
		printf ("%d", string[numero]);
		numero++;
	}
}
