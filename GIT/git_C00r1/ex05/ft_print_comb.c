/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 23:21:28 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/08 11:25:35 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	while (n[0] <= '7')
	{
		write(1, &n, 3);
		if (n[0] != '7')
		{	
			write(1, ", ", 2);
		}
		n[2]++;
		if (n[2] > '9')
		{
			n[1]++;
			n[2] = n[1] + 1;
		}
		if (n[1] > '8')
		{
			n[0]++;
			n[1] = n[0] + 1;
			n[2] = n[1] + 1;
		}
	}
}
/*
int	main(void)
{
	ft_print_comb();
}
*/
