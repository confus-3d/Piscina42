/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 16:53:34 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/09 16:53:56 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	horizontal(char a, char b, char c, int x)
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
		if (h != 1 && h == x)
		{
			ft_putchar(c);
		}
		h++;
	}
	ft_putchar('\n');
}

void	vertical(int x, int y)
{
	char	*visual;
	int		v;

	visual = "ABAB BCBC";
	v = 1;
	while (v <= y)
	{
		if (v == 1)
		{
			horizontal(visual[0], visual[1], visual[2], x);
		}
		if (v != 1 && v != y)
		{
			horizontal(visual[3], visual[4], visual[5], x);
		}
		if (v != 1 && v == y)
		{
			horizontal(visual[6], visual[7], visual[8], x);
		}
		v++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		vertical(x, y);
	}
	else
	{
		write(1, "Introduce valores positivos\n", 28);
	}
}
