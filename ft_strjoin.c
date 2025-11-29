/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:53:17 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/27 16:11:20 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *a, const char *b)
{
	size_t	length;
	char	*joined;

	if (!a)
		return (ft_strdup(b));
	if (!b)
		return (ft_strdup(a));
	length = ft_strlen(a) + ft_strlen(b) + 1;
	joined = ft_calloc(1, length);
	if (joined != NULL)
	{
		ft_strlcat(joined, a, length);
		ft_strlcat(joined, b, length);
	}
	return (joined);
}
