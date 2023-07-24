/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:58:40 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/24 10:46:10 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_prime(int nb)
{
	int	divide;

	divide = 2;
	if (nb <= 1)
		return (0);
	while (divide < nb / divide)
	{
		if ((nb % divide) == 0)
			return (0);
		divide++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(6700418));
}
*/
