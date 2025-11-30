/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:35:11 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/30 15:08:21 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *av, const void *bv, size_t length)
{
	size_t					index;
	unsigned char *const	a = (unsigned char*) av;
	unsigned char *const	b = (unsigned char*) bv;

	index = -1;
	if (!av || !bv)
		return (0);
	while (++index < length)
		if (a[index] != b[index])
			return ((a[index] > b[index]) - (a[index] < b[index]));
	return (0);
}
