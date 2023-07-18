/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:29:06 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/18 12:50:02 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index > 2)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	if (index == 1 || index == 2)
		return (1);
	if (index == 0)
		return (0);
	else
		return (-1);
}
