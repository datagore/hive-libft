/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:51 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/19 12:11:45 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *string, const char *set)
{
	size_t	begin;
	size_t	end;
	size_t	i;

	if (string == NULL || set == NULL)
		return (NULL);
	i = 0;
	while (ft_strchr(set, string[i]) != NULL)
		i++;
	begin = i;
	end = i;
	while (string[i] != '\0')
		if (ft_strchr(set, string[i++]) == NULL)
			end = i;
	return (ft_substr(string, begin, end - begin));
}
