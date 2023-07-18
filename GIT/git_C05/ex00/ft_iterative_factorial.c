/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:12:06 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/18 09:36:03 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	while (nb > 1)
		result = result * --nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	return (result);
}
/*
int	main(void)
{
	ft_iterative_factorial(7);
}
*/
