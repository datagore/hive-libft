/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:51:07 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/21 13:16:06 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	bytes;

	bytes = count * size;
	if (size != 0 && bytes / size != count)
		return (NULL);
	if (bytes == 0)
		bytes = 1;
	result = malloc(bytes);
	if (result != NULL)
		ft_bzero(result, bytes);
	return (result);
}
