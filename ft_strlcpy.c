/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:36:51 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/15 10:39:09 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *target, const char *source, size_t size)
{
	size_t	length;

	length = 0;
	while (source[length] != '\0')
	{
		if (length + 1 < size)
			*target++ = source[length];
		length++;
	}
	if (size > 0)
		*target = '\0';
	return (length);
}
