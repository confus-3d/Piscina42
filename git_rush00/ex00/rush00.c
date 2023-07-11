/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: confus3d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 06:23:09 by confus3d          #+#    #+#             */
/*   Updated: 2023/07/09 14:13:40 by confus3d         ###   ########.fr       */
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

	visual = "o-o| |o-o";
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
