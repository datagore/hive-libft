/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:33:51 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/18 13:38:21 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(long number)
{
	int	length;

	length = number <= 0;
	if (number < 0)
		number = -number;
	while (number > 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int number)
{
	char	*string;
	long	value;
	int		length;

	length = get_length(number);
	string = malloc(length + 1);
	if (string != NULL)
	{
		string[0] = '0';
		string[length] = '\0';
		value = number;
		if (value < 0)
			value = -value;
		while (value > 0)
		{
			string[--length] = value % 10 + '0';
			value /= 10;
		}
		if (number < 0)
			string[0] = '-';
	}
	return (string);
}
