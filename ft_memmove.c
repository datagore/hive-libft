/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 17:07:39 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/27 15:36:19 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *const	dst_bytes = (unsigned char *) dst;
	unsigned char *const	src_bytes = (unsigned char *) src;
	const size_t			end = len;

	if (!dst || !src)
		return (dst);
	if (src_bytes < dst_bytes)
		while (len--)
			dst_bytes[len] = src_bytes[len];
	else
		while (len--)
			dst_bytes[end - len - 1] = src_bytes[end - len - 1];
	return (dst);
}
