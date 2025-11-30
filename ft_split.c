/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:21:39 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/30 15:46:00 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	split(const char *string, char delimiter, char **array)
{
	size_t		length;
	const char	*start;

	length = 0;
	while (*string)
	{
		while (*string == delimiter)
			string++;
		start = string;
		while (*string && *string != delimiter)
			string++;
		if (string != start)
		{
			if (array)
			{
				array[length] = ft_substr(start, 0, (size_t)(string - start));
				if (!array[length])
					return (-1);
			}
			length++;
		}
	}
	return (length);
}

char	**ft_split(const char *string, char delimiter)
{
	size_t	length;
	char	**array;

	if (!string)
		return (NULL);
	length = split(string, delimiter, NULL);
	array = ft_calloc((length + 1), sizeof(char *));
	if (array)
	{
		if (split(string, delimiter, array) == (size_t) - 1)
		{
			while (length--)
				free(array[length]);
			free(array);
			return (NULL);
		}
	}
	return (array);
}
