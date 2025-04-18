/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:07:39 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/17 11:50:41 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *target, const void *source, size_t length)
{
	size_t				index;
	unsigned char		*target_bytes;
	const unsigned char	*source_bytes;

	target_bytes = (unsigned char *) target;
	source_bytes = (const unsigned char *) source;
	if (source_bytes < target_bytes)
	{
		index = length;
		while (index > 0)
		{
			index--;
			target_bytes[index] = source_bytes[index];
		}
	}
	else
	{
		index = 0;
		while (index < length)
		{
			target_bytes[index] = source_bytes[index];
			index++;
		}
	}
	return (target);
}
