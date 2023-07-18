/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:32:02 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/10 13:54:46 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 8;
	b = 3;
	ft_div_mod(a, b, &c, &d);
	a = a + '0';
	b = b + '0';
	c = c + '0';
	d = d + '0';
	write(1, &a, 1);
	write(1, "/", 1);
	write(1, &b, 1);
	write(1, "=", 1);
	write(1, &c, 1);
	write(1, " R:", 3);
	write(1, &d, 1);
}
*/
