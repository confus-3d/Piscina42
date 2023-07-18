/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:42:07 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/18 15:02:28 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	square;
	unsigned int	number;

	number = nb;
	square = 1;
	while ((square * square) <= number)
	{
		if ((square * square) == number)
			return (square);
		square++;
	}
	return (0);
}
