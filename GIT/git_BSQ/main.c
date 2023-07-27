/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:15:16 by lgandari          #+#    #+#             */
/*   Updated: 2023/07/26 18:52:25 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	save_record(int *record, int k, int actualrow, int actualcol);
void	map_record(char *grid, char e, int *r);
void	map_fill(char *grid, char full, int var[10]);
void	map_print(char *data);
int		calc_file_size(char *path);
void	save_file(char *path, int size, char **data);
void	save_symbols(char *data, char **symbols);
void	save_map(char *data, char **map, int file_size);
int		save_num_lines(char *data);
int		save_num_cols(char *map);
int		check_symbol_error(char *symbols);
int		check_map_error(char *map, char *symbols, int n_cols, int n_lines);
void	input_map(char **input, int count);
char	*read_input(void);

void	free_buffer(char **data, char **symbols, char **map)
{
	if (*data != NULL)
		free(*data);
	if (*map != NULL)
		free(*map);
	if (*symbols != NULL)
		free(*symbols);
}

int	multimap(char *maplocation)
{
	char	*data;
	int		file_size;
	int		var[10];
	char	*symbols;
	char	*map;

	file_size = calc_file_size(maplocation);
	if (file_size == -1)
		return (1);
	save_file(maplocation, file_size, &data);
	var[0] = save_num_lines(data);
	save_symbols(data, &symbols);
	save_map(data, &map, file_size);
	var[1] = save_num_cols(map);
	if (check_symbol_error(symbols) == 1
		|| (check_map_error(map, symbols, var[1], var[0])))
		printf("map error\n");
	else
	{	
		map_record(map, symbols[0], var);
		map_fill(map, symbols[2], var);
		map_print(map);
	}
	free_buffer(&data, &symbols, &map);
	return (0);
}

int	singlemap(char *data)
{
	int		var[10];
	char	*symbols;
	char	*map;
	int		file_size;

	file_size = 0;
	while (data[file_size] != '\0')
		file_size++;
	var[0] = save_num_lines(data);
	save_symbols(data, &symbols);
	save_map(data, &map, file_size);
	var[1] = save_num_cols(map);
	if (check_symbol_error(symbols) == 1
		|| (check_map_error(map, symbols, var[1], var[0])))
		write(1, "map error\n", 10);
	else
	{
		map_record(map, symbols[0], var);
		map_fill(map, symbols[2], var);
		map_print(map);
	}
	free_buffer(&data, &symbols, &map);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*input;

	i = 1;
	if (argc == 1)
	{
		input = read_input();
		singlemap(input);
	}
	else
	{
		while (i < argc)
		{
			if (multimap(argv[i]) == 1)
				write(1, "map error\n", 10);
			i++;
			if (i != argc)
				write(1, "\n", 1);
		}
	}
	return (0);
}
