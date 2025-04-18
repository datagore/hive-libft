/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:24:20 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/16 15:28:27 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t	start;
	size_t	i;

	if (needle[0] == '\0')
		return ((char *) haystack);
	start = 0;
	while (haystack[start] != '\0')
	{
		i = 0;
		while (start + i < length && haystack[start + i] == needle[i])
			if (needle[++i] == '\0')
				return ((char *) &haystack[start]);
		start++;
	}
	return (NULL);
}
