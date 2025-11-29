/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:42:51 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/27 16:18:49 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *string, char (*function)(unsigned int, char))
{
	char *const		result = ft_strdup(string);
	unsigned int	index;

	if (!result || !function)
		return (NULL);
	index = -1;
	while (string[++index])
		result[index] = function(index, string[index]);
	return (result);
}
