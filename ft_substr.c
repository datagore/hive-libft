/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:48:48 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/27 16:56:35 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *string, unsigned int start, size_t max_length)
{
	size_t	length;

	if (!string)
		return (NULL);
	while (*string && start--)
		string++;
	length = 0;
	while (string[length] && length < max_length)
		length++;
	return (ft_memcpy(ft_calloc(1, length + 1), string, length));
}
