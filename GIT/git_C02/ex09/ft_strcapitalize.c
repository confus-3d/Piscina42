/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <fde-los-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:54:33 by fde-los-          #+#    #+#             */
/*   Updated: 2023/07/11 22:50:05 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	put_capitalize(char *str, int *flag, int *count)
{
	if (str[*count] >= 'a' && str[*count] <= 'z' && *flag == 0)
	{
		if (str[*count - 1] < '0')
		{
			str[*count] = str[*count] - 32;
			*flag = 1;
		}
		if (str[*count - 1] > '9' && str[*count - 1] < 'A')
		{
			str[*count] = str[*count] - 32;
			*flag = 1;
		}
		if (str[*count - 1] > 'Z' && str[*count - 1] < 'a')
		{
			str[*count] = str[*count] - 32;
			*flag = 1;
		}
		if (str[*count - 1] > 'z')
		{
			str[*count] = str[*count] - 32;
			*flag = 1;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z' && flag == 0)
		{
			put_capitalize(str, &flag, &count);
		}
		else if (str[count] >= 'A' && str[count] <= 'Z')
		{
		}
		else if (str[count] < '0' || str[count] > '9')
		{
			flag = 0;
		}
		count++;
	}
	return (str);
}
/*
int	main(int argc, char **argv)
{
	ft_strcapitalize(argv[1]);
}
*/
