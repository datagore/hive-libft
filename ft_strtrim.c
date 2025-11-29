/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:51 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/29 23:00:20 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *string, const char *set)
{
	size_t	begin;
	size_t	end;
	size_t	i;

	if (!string || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, string[i]))
		i++;
	begin = i;
	end = i;
	while (string[i])
		if (!ft_strchr(set, string[i++]))
			end = i;
	return (ft_substr(string, begin, end - begin));
}
