/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   todojunto.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:47:37 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/26 17:50:34 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	save_record(int *record)
{
	record[7] = record[4];
	record[8] = record[2];
	record[9] = record[3];
}

//r[7]   0 maxrows  1 maxcols        2 actualrow  3 actualcol  4 corner 
//       5 line     6 obstacle_flag  7 record     8 recordrow  9 recordcol
void	reset_var(int *r)
{
	r[2] = -1;
	r[7] = 0;
}

void	map_record(char *gr, char e, int *r)
{
	reset_var(r);
	while (++r[2] + r[7] < r[0])
	{
		r[3] = -1;
		r[6] = 0;
		while (++r[3] + r[7] < r[1])
		{
			r[4] = 0;
			while (r[6] == 0)
			{
				r[5] = -1;
				while (++r[5] <= r[4] && r[6] == 0)
					if (r[2] + r[4] == r[0] || r[3] + r[4] == r[1]
						|| gr[((r[2] + r[4] - r[5]) * (r[1] + 1))
							+ (r[3] + r[4])] != e || gr[((r[2] + r[4])
								* (r[1] + 1)) + (r[3] + r[4] - r[5])] != e)
						r[6] = 1;
				if (r[6] == 0)
					r[4]++;
			}
			if (r[7] < r[4])
				save_record(r);
			r[6] = 0;
		}
	}
}

void	map_fill(char *gr, char f, int var[10])
{
	int		row;
	int		col;

	row = 0;
	col = 0;
	while (row < var[7])
	{
		col = 0;
		while (col < var[7])
		{
			gr[((var[8] + row) * (var[1] + 1)) + (var[9] + col)] = f;
			col++;
		}
		row++;
	}
}

void	map_print(char *data)
{
	int	i;

	i = 0;
	while (data[i] != '\0')
	{
		write (1, &data[i], 1);
		i++;
	}
}
