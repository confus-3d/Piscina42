/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   save_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgandari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:59:55 by lgandari          #+#    #+#             */
/*   Updated: 2023/07/26 17:49:39 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	calc_file_size(char *path)
{
	int		fd;
	int		total_bytes;
	int		bytes_read;
	char	*buffer;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (-1);
	total_bytes = 0;
	bytes_read = -1;
	buffer = (char *) malloc(512 * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}
	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		total_bytes += bytes_read;
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	free(buffer);
	close(fd);
	return (total_bytes);
}

void	save_file(char *path, int size, char **data)
{
	int		fd;
	int		bytes_read;

	fd = open(path, O_RDONLY);
	if (fd == -1)
		return ;
	*data = (char *)malloc((size + 1) * sizeof(char));
	if (*data == ((void *)0))
	{
		return ;
		close(fd);
	}
	bytes_read = read(fd, *data, size);
	close(fd);
}

void	save_symbols(char *data, char **symbols)
{
	int	i;
	int	n_symbols;

	*symbols = (char *) malloc(4 * sizeof(*symbols));
	if (symbols == NULL)
		return ;
	i = 0;
	n_symbols = 0;
	while (data[i] >= '0' && data[i] <= '9' && data[i + 3] != '\n')
		i++;
	n_symbols = 0;
	while (n_symbols < 3)
	{
		(*symbols)[n_symbols] = data[i];
		n_symbols++;
		i++;
	}
	(*symbols)[n_symbols] = '\0';
}

void	save_map(char *data, char **map, int file_size)
{
	int	i;
	int	j;
	int	len_map;

	i = 0;
	j = 0;
	while (data[i] != '\n')
		i++;
	i++;
	len_map = file_size - i - 1;
	*map = (char *) malloc(len_map * sizeof(*map));
	if (map == NULL)
		return ;
	while (data[i] != '\0')
	{
		(*map)[j] = data[i];
		i++;
		j++;
	}
}
