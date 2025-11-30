/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:32:02 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/30 15:24:11 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *data, int value, size_t length)
{
	size_t					index;
	unsigned char *const	bytes = (unsigned char*) data;

	if (!data)
		return (NULL);
	index = -1;
	while (++index < length)
		if (bytes[index] == (unsigned char) value)
			return (&bytes[index]);
	return (NULL);
}
