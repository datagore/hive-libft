/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:26:42 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/29 22:58:42 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *ac, const char *bc, size_t limit)
{
	unsigned char *const	a = (unsigned char *) ac;
	unsigned char *const	b = (unsigned char *) bc;
	size_t					index;

	index = -1;
	while (a && b && ++index < limit && (a[index] || b[index]))
		if (a[index] != b[index])
			return ((a[index] > b[index]) - (a[index] < b[index]));
	return (0);
}
