/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: confus3d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:22:31 by confus3d          #+#    #+#             */
/*   Updated: 2023/07/09 13:02:37 by confus3d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
	ft_putchar('\n');
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
