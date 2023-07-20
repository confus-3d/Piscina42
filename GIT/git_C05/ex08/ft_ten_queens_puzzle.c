/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:47:05 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/19 21:43:21 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define SIZE 10

void	print(int grid[SIZE][SIZE], int queens, int c)
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
	while (row + ++k < SIZE && col + k < SIZE)
		if (grid[row + k][col + k] == 1)
			return (0);
	k = -1;
	while ((row + ++k < SIZE && col - k >= 0))
		if (grid[row + k][col - k] == 1)
			return (0);
	k = -1;
	while (row - ++k >= 0 && col + k < SIZE)
		if (grid[row - k][col + k] == 1)
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
void	generate(int g[SIZE][SIZE], int r, int c, int queens)
{
	int	i[5];

	i[0] = 1;
	i[1] = 0;
	i[2] = 0;
	print(g, queens, c);
	while (i[0]++ < 3 && c != SIZE)
	{
		if (v(g, r, c) == 1 && i[1] == 0)
		{
			i[1]++;
			g[r][c] = 1;
			next(&i[3], &i[4], r, c);
			generate(g, i[3], i[4], ++queens);
			queens--;
		}
		else if (i[1] == 1 || (v(g, r, c) == 0 && i[2] == 0))
		{
			i[2]++;
			g[r][c] = 2;
			next(&i[3], &i[4], r, c);
			generate(g, i[3], i[4], queens);
		}
		g[r][c] = 3;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[SIZE][SIZE];
	int	x;
	int	y;

	x = 0;
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
	generate(grid, 0, 0, 0);
	return (0);
}

int	main(void)
{
	ft_ten_queens_puzzle();
}

