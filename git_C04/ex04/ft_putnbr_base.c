/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:58:50 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/14 15:08:41 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_error(int *size, char *base)
{
	int	helper;
	int	counter;

	helper = 0;
	counter = 0;
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
	int	resto;
	int	size;
	int	final[32];
	int	i;

	resto = 0;
	size = 0;
	i = 0;
	if (ft_error(&size, &base[0]) == 1)
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	while (nbr >= size)
	{
		resto = nbr % size;
		nbr = nbr / size;
		final[i++] = resto;
	}
	final[i] = nbr;
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

int	main(int argc, char **argv)
{
	if (argc > 2)
		ft_putnbr_base(ft_atoi(argv[1]), argv[2]);
}
