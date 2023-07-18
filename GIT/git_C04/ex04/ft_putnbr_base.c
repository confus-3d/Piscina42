/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:58:50 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/18 15:47:18 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_error(unsigned int *size, char *base)
{
	unsigned int	helper;

	helper = 0;
	while (base[*size] != '\0')
	{
		if (base[*size] == '+' || base[*size] == '-')
			return (1);
		helper = *size;
		while (base[helper] != '\0')
		{
			if (base[helper] == base[helper + 1])
				return (1);
			helper++;
		}
		helper = *size;
		*size = helper + 1;
	}
	if (*size < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int		size;
	int					final[32];
	int					i;
	unsigned int		number;

	size = 0;
	i = 0;
	if (ft_error(&size, &base[0]) == 1)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		number = nbr * -1;
	}
	else
		number = nbr;
	while (number >= size)
	{
		final[i++] = number % size;
		number = number / size;
	}
	final[i] = number;
	while (i >= 0)
		ft_putchar(base[final[i--]]);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	i = 0;
	sign = 1;
	number = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - '0');
		i++;
	}
	number = number * sign;
	return (number);
}
/*
int	main(int argc, char **argv)
{
	if (argc > 2)
		ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
}
*/
