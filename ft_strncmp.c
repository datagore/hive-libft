/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:26:42 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/18 13:40:32 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *a, const char *b, size_t limit)
{
	size_t	index;

	index = 0;
	while ((a[index] != '\0' || b[index] != '\0') && index < limit)
	{
		if (a[index] != b[index])
			return ((a[index] > b[index]) - (a[index] < b[index]));
		index++;
	}
	return (0);
}
