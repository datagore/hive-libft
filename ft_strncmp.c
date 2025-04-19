/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:26:42 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/19 11:59:41 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *ac, const char *bc, size_t limit)
{
	size_t				index;
	const unsigned char	*a;
	const unsigned char	*b;

	index = 0;
	a = (const unsigned char *) ac;
	b = (const unsigned char *) bc;
	while ((a[index] != '\0' || b[index] != '\0') && index < limit)
	{
		if (a[index] != b[index])
			return ((a[index] > b[index]) - (a[index] < b[index]));
		index++;
	}
	return (0);
}
