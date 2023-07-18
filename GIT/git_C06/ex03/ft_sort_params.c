/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:47:19 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/17 11:20:29 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_print_params(int argc, char **argv)
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

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if ((ft_strcmp(argv[i], argv[j])) > 0)
			{
				swap = argv[i];
				argv[i] = argv[j];
				argv[j] = swap;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argc, argv);
}
