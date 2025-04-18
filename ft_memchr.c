/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:32:02 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/17 17:23:21 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *data, int value, size_t length)
{
	size_t			index;
	unsigned char	*data_bytes;

	index = 0;
	data_bytes = (unsigned char *) data;
	while (index < length)
	{
		if (data_bytes[index] == (unsigned char) value)
			return (&data_bytes[index]);
		index++;
	}
	return (NULL);
}
