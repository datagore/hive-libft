/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:35:11 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/16 14:22:29 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *av, const void *bv, size_t length)
{
	size_t				index;
	const unsigned char	*a;
	const unsigned char	*b;

	index = 0;
	a = (const unsigned char *) av;
	b = (const unsigned char *) bv;
	while (index < length)
	{
		if (a[index] != b[index])
			return ((a[index] > b[index]) - (a[index] < b[index]));
		index++;
	}
	return (0);
}
