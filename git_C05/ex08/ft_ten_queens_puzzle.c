/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:47:05 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/24 13:06:52 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define SIZE 10

void	print(int grid[SIZE][SIZE], int queens, int c, int *solutions)
{
	int		i;
	int		j;
	char	number;

	if (queens == SIZE && c == SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			i = 0;
			while (grid[i][j] != 1 && i < SIZE)
				i++;
			if (grid[i][j] == 1)
			{
				number = i + '0';
				write (1, &number, 1);
			}
			j++;
		}
		write (1, "\n", 1);
		(*solutions)++;
	}
}

int	v(int grid[SIZE][SIZE], int row, int col)
{
	int	k;

	k = 0;
	while (k < SIZE)
		if (grid[row][k] == 1 || grid[k++][col] == 1)
			return (0);
	k = -1;
	while ((row + ++k < SIZE && col - k >= 0))
		if (grid[row + k][col - k] == 1)
			return (0);
	k = -1;
	while (row - ++k >= 0 && col - k >= 0)
		if (grid[row - k][col - k] == 1)
			return (0);
	return (1);
}

void	next(int *nextrow, int *nextcol, int row, int col)
{
	*nextcol = col;
	*nextrow = row + 1;
	if (*nextrow == SIZE)
	{
		*nextcol = *nextcol + 1;
		*nextrow = 0;
	}
}

//i 0 contador, i 1 valid flag, i 2 invalid flag, i 3 nextrow, i 4 next col
void	generate(int g[SIZE][SIZE], int old[2], int queens, int *solutions)
{
	int	i[3];
	int	new[2];

	i[0] = 1;
	i[1] = 0;
	i[2] = 0;
	print(g, queens, old[1], solutions);
	while (i[0]++ < 3 && old[1] != SIZE)
	{
		if (v(g, old[0], old[1]) == 1 && i[1] == 0 && i[1]++ == 0)
		{
			g[old[0]][old[1]] = 1;
			next(&new[0], &new[1], old[0], old[1]);
			generate(g, new, ++queens, solutions);
			queens--;
		}
		else if (i[1] == 1 || (v(g, old[0], old[1]) == 0 && i[2] == 0))
		{
			i[2]++;
			g[old[0]][old[1]] = 2;
			next(&new[0], &new[1], old[0], old[1]);
			generate(g, new, queens, solutions);
		}
		g[old[0]][old[1]] = 3;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[SIZE][SIZE];
	int	x;
	int	y;
	int	old[2];
	int	solutions;

	solutions = 0;
	x = 0;
	old[0] = 0;
	old[1] = 0;
	while (x < SIZE)
	{
		y = 0;
		while (y < SIZE)
		{
			grid[x][y] = 0;
			y++;
		}
		x++;
	}
	generate(grid, old, 0, &solutions);
	return (solutions);
}
/*
int	main(void)
{
	printf("%d", ft_ten_queens_puzzle());
}
*/
