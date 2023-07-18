/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:58:40 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/18 12:50:20 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	divide;

	while (nb >= 3)
	{
		divide = nb;
		while (--divide > 1)
			if ((nb % divide) == 0)
				break ;
		if (divide == 1)
			return (nb);
		nb++;
	}
	return (2);
}
