/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:24:10 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/18 12:13:11 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	char	*found;

	found = NULL;
	while (1)
	{
		if (*str == (unsigned char) chr)
			found = (char *) str;
		if (*str++ == '\0')
			break ;
	}
	return (found);
}
