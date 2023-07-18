/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:22:03 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/08 11:25:52 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 <= 98)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{	
			ft_print_char((n1 / 10) + '0');
			ft_print_char((n1 % 10) + '0');
			write(1, " ", 1);
			ft_print_char((n2 / 10) + '0');
			ft_print_char((n2 % 10) + '0');
			if (n1 != 98 || n2 != 99)
			{
				write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/
