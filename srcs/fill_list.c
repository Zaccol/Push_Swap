/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 04:50:14 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 22:04:05 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/push_swap.h"

t_list	*ft_lstnew(int number)
{
	t_list	*list;

	list = malloc(sizeof(*list));
	if (list == NULL)
		return (NULL);
	list->number = number;
	list->index = 0;
	list->next = NULL;
	return (list);
}

void	free_stack(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		*stack = tmp;
		tmp = tmp->next;
		free(*stack);
	}
}

t_list	*fill_stack(int ac, char **av)
{
	t_list	*new;
	t_list	*list;
	int		number;
	int		i;

	i = 1;
	if (!(ft_atoi(av[1], &number, 0)))
		return (NULL);
	list = ft_lstnew(number);
	while (++i < ac)
	{
		if (!(ft_atoi(av[i], &number, 0)))
		{	
			free_stack(&list);
			return (NULL);
		}
		new = ft_lstnew(number);
		ft_lstadd_back(&list, new);
	}
	return (list);
}
