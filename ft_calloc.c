/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:51:07 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/30 15:34:09 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	const size_t	bytes = count * size;

	if (size != 0 && bytes / size != count)
		return (NULL);
	return (ft_memset(malloc(bytes), 0, bytes + !bytes));
}
