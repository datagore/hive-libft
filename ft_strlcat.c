/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:40:36 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/15 10:43:22 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *target, const char *source, size_t size)
{
	size_t	length;

	length = 0;
	while (length < size && target[length] != '\0')
		length++;
	while (*source != '\0')
	{
		if (length + 1 < size)
			target[length] = *source;
		if (length + 1 == size)
			target[length] = '\0';
		length++;
		source++;
	}
	if (length < size)
		target[length] = '\0';
	return (length);
}
