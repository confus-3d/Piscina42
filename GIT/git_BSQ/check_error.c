/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:38:54 by lgandari          #+#    #+#             */
/*   Updated: 2023/07/26 17:50:57 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_symbol_error(char *symbols)
{
	int	i;

	i = 0;
	while (symbols[i])
		i++;
	if (i != 3)
		return (1);
	i = 0;
	if (symbols[0] == symbols[1]
		|| symbols[0] == symbols[2]
		|| symbols[1] == symbols[2])
		return (1);
	return (0);
}

int	check_map_error(char *map, char *symbols, int n_cols, int n_lines)
{
	int	i;
	int	len_col;
	int	len_line;

	i = 0;
	len_col = 0;
	while (map[i] != '\0')
	{
		len_line = 0;
		while (map[i] == symbols[0] || map[i] == symbols[1]
			|| map[i] == symbols[2])
		{
			len_line++;
			i++;
		}
		if (map[i++] == '\n')
			len_col++;
		if (len_line != n_cols)
			return (1);
	}
	if (len_col != n_lines)
		return (1);
	return (0);
}
