/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:01:25 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/14 17:03:27 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *target, int value, size_t length)
{
	unsigned char	*target_bytes;
	size_t			index;

	index = 0;
	target_bytes = (unsigned char *) target;
	while (index < length)
		target_bytes[index++] = value;
	return (target);
}
