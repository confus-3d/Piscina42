/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   single_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:08:55 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/26 17:49:54 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	input_map(char **input, int count)
{
	char	*aux;
	int		i;

	aux = NULL;
	aux = malloc(count);
	if (aux == NULL)
		return ;
	i = 0;
	while (*input && (*input)[i])
	{
		aux[i] = (*input)[i];
		i++;
	}
	if (*input != NULL)
		free(*input);
	*input = malloc(count + 2);
	if (*input == NULL)
		return ;
	i = 0;
	while (i < count)
	{
		(*input)[i] = aux[i];
		i++;
	}
	free(aux);
}

char	*read_input(void)
{
	char	buffer;
	char	*input;
	int		count;

	input = NULL;
	count = 0;
	while (read(0, &buffer, 1) > 0)
	{
		input_map(&input, count);
		if (input == NULL)
			return (NULL);
		input[count++] = buffer;
	}
	if (count == 0)
		return (NULL);
	input[count] = '\0';
	return (input);
}
