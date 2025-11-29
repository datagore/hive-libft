/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:24:20 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/29 22:59:41 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t	start;
	size_t	i;

	if (!haystack || !needle)
		return (NULL);
	if (!needle[0])
		return ((char *) haystack);
	start = -1;
	while (haystack[++start])
	{
		i = 0;
		while (start + i < length && haystack[start + i] == needle[i])
			if (!needle[++i])
				return ((char *) &haystack[start]);
	}
	return (NULL);
}
