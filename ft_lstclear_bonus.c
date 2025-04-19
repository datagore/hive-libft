/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:30:34 by abostrom          #+#    #+#             */
/*   Updated: 2025/04/19 12:05:23 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void*))
{
	t_list	*node;
	t_list	*next;

	if (list != NULL)
	{
		node = *list;
		while (node != NULL)
		{
			next = node->next;
			del(node->content);
			free(node);
			node = next;
		}
		*list = NULL;
	}
}
