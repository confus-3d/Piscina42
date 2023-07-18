/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:42:07 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/18 12:50:37 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	while ((square * square) <= nb)
	{
		if ((square * square) == nb)
			return (square);
		square++;
	}
	return (0);
}
