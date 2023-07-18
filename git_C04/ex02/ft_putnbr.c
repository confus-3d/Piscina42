/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:36:23 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/18 14:49:10 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int nb)
{
	unsigned int	number;

	number = -1;
	if (nb < 0)
	{
		ft_putchar('-');
		number = number * nb;
	}
	else
		number = nb;
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
		ft_putchar(number + 48);
}
/*
int	main(void)
{
	{
		ft_putnbr(-2147483648);
	}
}
*/
