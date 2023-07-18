/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:32:02 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/10 14:05:58 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;
	int	n2;

	n1 = *a;
	n2 = *b;
	*a = n1 / n2;
	*b = n1 % n2;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 8;
	b = 3;
	a = a + '0';
	b = b + '0';
	write(1, &a, 1);
	write(1, "/", 1);
	write(1, &b, 1);
	write(1, "=", 1);
	a = a - '0';
	b = b - '0';
	ft_ultimate_div_mod(&a, &b);
	a = a + '0';
	b = b + '0';
	write(1, &a, 1);
	write(1, " R:", 3);
	write(1, &b, 1);
}
*/
