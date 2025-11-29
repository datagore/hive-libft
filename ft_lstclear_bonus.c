/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abostrom <abostrom@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:30:34 by abostrom          #+#    #+#             */
/*   Updated: 2025/11/29 22:31:20 by abostrom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void*))
{
	t_list	*node;
	t_list	*next;

	if (!list)
		return ;
	node = *list;
	while (node)
	{
		next = node->next;
		if (del)
			del(node->content);
		free(node);
		node = next;
	}
	*list = NULL;
}
