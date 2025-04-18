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
	size_t	index;
	size_t	length;
	char	*result;

	length = ft_strlen(string);
	result = malloc(length + 1);
	if (result != NULL)
	{
		index = 0;
		while (index <= length)
		{
			result[index] = string[index];
			index++;
		}
	}
	return (result);
}
