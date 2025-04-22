/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:43:30 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/14 17:50:01 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *string)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (*string == ' ' || ('\t' <= *string && *string <= '\r'))
		string++;
	if ((*string == '+' || *string == '-') && *string++ == '-')
		sign = -1;
	while ('0' <= *string && *string <= '9')
		value = value * 10 + *string++ - '0';
	return (sign * value);
}
