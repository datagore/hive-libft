/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:42:51 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/16 16:03:20 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *string, char (*function)(unsigned int, char))
{
	unsigned int	index;
	char			*result;

	result = ft_strdup(string);
	if (result != NULL)
	{
		index = 0;
		while (string[index] != '\0')
		{
			result[index] = function(index, string[index]);
			index++;
		}
	}
	return (result);
}
