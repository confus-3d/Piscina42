/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:57:16 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/16 10:05:03 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	g_e[4] = {1, 2, 3, 4};

int	ft_strcmp(char *s1, char *s2)
{
	int	difference;

	difference = 0;
	while (s1[difference] == s2[difference] && s1[difference] != '\0')
		difference++;
	return (s1[difference] - s2[difference]);
}

void	print(int grid[4][4], char *compare, char *arg)
{
	int		i;
	int		j;
	char	printer;

	if (ft_strcmp(arg, compare) == 0)
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				printer = grid[i][j] + '0';
				write (1, &printer, 1);
				if (j < 3)
					write (1, " ", 1);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
}

void	up(int grid[4][4], char *compare, int *count)
{
	int	i;
	int	j;
	int	result;
	int	h;

	j = 0;
	while (j < 4) 
	{
		result = 1;
		i = 0;
		h = grid[i][j];
		while (++i < 4)
		{
			if (h < grid [i][j])
			{
				result++;
				h = grid[i][j];
			}
		}
		compare[*count] = result + '0';
		compare[*count + 1] = ' ';
		j++;
		*count = *count + 2;
	}
}

void	down(int grid[4][4], char *compare, int *count)
{
	int	i;
	int	j;
	int	result;
	int	h;

	j = 0;
	while (j < 4) 
	{
		result = 1;
		i = 3;
		h = grid[i][j];
		while (--i >= 0)
		{
			if (h < grid [i][j])
			{
				result++;
				h = grid[i][j];
			}
		}
		compare[*count] = result + '0';
		compare[*count + 1] = ' ';
		j++;
		*count = *count + 2;
	}
}

void	left(int grid[4][4], char *compare, int *count)
{
	int	i;
	int	j;
	int	result;
	int	h;

	i = 0;
	while (i < 4) 
	{
		result = 1;
		j = 0;
		h = grid[i][j];
		while (++j < 4)
		{
			if (h < grid [i][j])
			{
				result++;
				h = grid[i][j];
			}
		}
		compare[*count] = result + '0';
		compare[*count + 1] = ' ';
		i++;
		*count = *count + 2;
	}
}

void	right(int grid[4][4], char *compare, int *count)
{
	int	i;
	int	j;
	int	result;
	int	h;

	i = 0;
	while (i < 4) 
	{
		result = 1;
		j = 3;
		h = grid[i][j];
		while (--j >= 0)
		{
			if (h < grid [i][j])
			{
				result++;
				h = grid[i][j];
			}
		}
		compare[*count] = result + '0';
		compare[*count + 1] = ' ';
		i++;
		*count = *count + 2;
	}
}

void	compare(int grid[4][4], int row, char *arg)
{
	int		count;
	char	compare[100];

	count = 0;
	if (row == 4)
	{
		up(grid, compare, &count);
		down(grid, compare, &count);
		left(grid, compare, &count);
		right(grid, compare, &count);
		compare[count - 1] = '\0';
		print(grid, compare, arg);
	}
}

void	next(int *nextrow, int *nextcol, int *row, int *col)
{
	*nextrow = *row;
	*nextcol = *col + 1;
	if (*nextcol == 4) 
	{
		*nextrow = *nextrow + 1;
		*nextcol = 0;
	}
}

void	generate(int grid[4][4], int row, int col, char *arg)
{
	int	i;
	int	k;
	int	valid;
	int	nextrow;
	int	nextcol;

	compare(grid, row, arg);
	i = 0;
	while (i++ < 4)
	{
		valid = 1;
		k = 0;
		while (k++ < 4)
			if (grid[row][k - 1] == g_e[i - 1]
				|| grid[k - 1][col] == g_e[i - 1])
				valid = 0;
		if (valid)
		{
			grid[row][col] = g_e[i - 1];
			next(&nextrow, &nextcol, &row, &col);
			generate(grid, nextrow, nextcol, arg);
			grid[row][col] = 0;
		}
	}
}

int	main(int argc, char **argv)
{
	int	grid[4][4];

	if (argc == 2)
		generate(grid, 0, 0, argv[1]);
}
