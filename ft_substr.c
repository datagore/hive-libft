/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:48:48 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/18 14:42:06 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *string, unsigned int start, size_t max_length)
{
	size_t	length;
	char	*substring;

	while (*string != '\0' && start-- != 0)
		string++;
	length = 0;
	while (string[length] != '\0' && length < max_length)
		length++;
	substring = malloc(length + 1);
	if (substring != NULL)
	{
		substring[length] = '\0';
		while (length-- != 0)
			substring[length] = string[length];
	}
	return (substring);
}
