/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:47:19 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/17 10:17:40 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	j = 1;
	if (argc != 0)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				c = argv[j][i];
				write (1, &c, 1);
				i++;
			}
			write (1, "\n", 1);
			j++;
		}
	}
}
