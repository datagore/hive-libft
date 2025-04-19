/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:55:34 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/14 17:57:53 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	size_t	length;
	char	*duplicate;

	length = ft_strlen(string);
	duplicate = ft_calloc(1, length + 1);
	if (duplicate != NULL)
		ft_memcpy(duplicate, string, length);
	return (duplicate);
}
