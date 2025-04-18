/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:58:51 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/15 17:17:33 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_is_in_set(char chr, const char *set)
{
	while (*set != '\0')
		if (*set++ == chr)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *string, const char *set)
{
	size_t	begin;
	size_t	end;
	size_t	i;

	i = 0;
	while (char_is_in_set(string[i], set))
		i++;
	begin = i;
	end = i;
	while (string[i] != '\0')
		if (!char_is_in_set(string[i++], set))
			end = i;
	return (ft_substr(string, begin, end - begin));
}
