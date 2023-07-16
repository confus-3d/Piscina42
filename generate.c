/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 12:57:16 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/15 13:48:16 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


void	print(int grid[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4) 
	{
        j = 0;    
		while (j < 4) {
                printf("%d ", grid[i][j]);
            	j++;
			}
            printf("\n");
			i++;    
	}
	printf("\n");
	return;
}

void generateSudoku(int grid[4][4],int row, int col, int elements[], int size) {
	int	i;
	int	k;
	int valid;
	int element;
	int	nextRow;
	int nextCol;

	if (row == 4) {
		
        print(grid);
    }
	i = 0;
   while (i < size) {
        element = elements[i];
        valid = 1;
        k = 0;
		while (k < 4) {
            if (grid[row][k] == element || grid[k][col] == element) {
                valid = 0;
                break;
            }
			k++;
        }
 
		if (valid) {
            grid[row][col] = element;
            nextRow = row;
            nextCol = col + 1;
            if (nextCol == 4) {
                nextRow++;
                nextCol = 0;
            }
            generateSudoku(grid, nextRow, nextCol, elements, size);
            grid[row][col] = 0;
        }
		i++;
    }
}

int main() {
    int grid[4][4];
    int elements[] = {1, 2, 3, 4};
    int size = sizeof(elements) / sizeof(elements[0]);

    generateSudoku(grid, 0, 0, elements, size);

    return 0;
}

