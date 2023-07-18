/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:20:33 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/06 23:20:41 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	if (n < 0)
	{
		write(1, "N", 1);
	}
}
/*
int	main(void)
{
	int	x;

	write(1, "Introduce un numero: ", 21);
	scanf("%d", &x);
	write(1, "\n", 1);
	ft_is_negative(x);
}
*/
