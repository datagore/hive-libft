/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:32:02 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/29 22:49:50 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *data, int value, size_t length)
{
	size_t			index;
	unsigned char	*data_bytes;

	if (!data)
		return (NULL);
	data_bytes = (unsigned char *) data;
	index = -1;
	while (++index < length)
		if (data_bytes[index] == (unsigned char) value)
			return (&data_bytes[index]);
	return (NULL);
}
