/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:39:31 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/19 12:14:17 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *string, void (*function)(unsigned int, char*))
{
	unsigned int	index;

	if (string != NULL && function != NULL)
	{
		index = 0;
		while (string[index] != '\0')
		{
			function(index, &string[index]);
			index++;
		}
	}
}
