/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:07:32 by lgandari          #+#    #+#             */
/*   Updated: 2023/07/26 17:51:13 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	save_num_lines(char *data)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (data[i] >= '0' && data[i] <= '9' && data[i + 3] != '\n')
	{
		res = res * 10 + data[i] - '0';
		i++;
	}
	return (res);
}

int	save_num_cols(char *map)
{
	int	n_cols;

	n_cols = 0;
	while (map[n_cols] != '\n')
		n_cols++;
	return (n_cols);
}
