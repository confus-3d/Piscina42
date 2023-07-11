/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   completo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: confus3d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:22:31 by confus3d          #+#    #+#             */
/*   Updated: 2023/07/09 12:48:24 by confus3d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	linea(int x, char a, char b, char c)
{
	int	h;

	h = 1;
	while (h <= x)
	{
		if (h == 1) 
		{
			ft_putchar(a);
		}
		if (h != 1 && h != x)
		{
			ft_putchar(b);
		}
		if (h == x && h > 1) 
		{
			ft_putchar(c);
		}
		h++;
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	int	v;

	v = 1;
	while (v <= y)
	{
		if (v == 1)
		{
			linea(x, '/', '*', '\\');
		}
		if (v != 1 && v <= y)
		{
			linea(x, '*', ' ', '*');
		}
		if (v == y && v > 1)
		{
			linea(x, '\\', '*', '/');
		}
		v++;
	}
}

int	main(void)
{
	rush(1, 1); 
	return (0);
}
