/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:51:15 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/15 14:53:45 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_digits(long value, int fd)
{
	if (value >= 10)
		write_digits(value / 10, fd);
	ft_putchar_fd(value % 10 + '0', fd);
}

void	ft_putnbr_fd(int number, int fd)
{
	long	value;

	value = number;
	if (value < 0)
	{
		value = -value;
		ft_putchar_fd('-', fd);
	}
	write_digits(value, fd);
}
