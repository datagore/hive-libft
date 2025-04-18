/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:53:17 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/15 10:57:12 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *a, char const *b)
{
	size_t	length;
	char	*joined;

	length = ft_strlen(a) + ft_strlen(b) + 1;
	joined = ft_calloc(1, length);
	if (joined != NULL)
	{
		ft_strlcat(joined, a, length);
		ft_strlcat(joined, b, length);
	}
	return (joined);
}
