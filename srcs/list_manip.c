/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_manip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 04:31:54 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 06:15:14 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/push_swap.h"

void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (list && new)
	{
		new->next = *list;
		*list = new;
	}
}

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list		*begin;

	begin = (*list);
	if (begin == NULL)
		(*list) = new;
	else
	{
		while (begin->next)
			begin = begin->next;
		begin->next = new;
	}
}

int	delete_first(t_list **list)
{
	t_list	*to_del;

	to_del = *list;
	if (list == NULL)
		return (0);
	*list = (*list)->next;
	free(to_del);
	to_del = NULL;
	return (0);
}
