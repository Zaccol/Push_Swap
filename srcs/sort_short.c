/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 04:42:49 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 06:28:43 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/push_swap.h"

void	sort_2(t_list **stack_a)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
	{
		if (is_sort(*stack_a))
			return ;
		else
			swap_a(stack_a);
		return ;
	}
}

void	sort_3(t_list **stack_a)
{
	int		index_max;
	int		i;
	int		size;
	t_list	*tmp;

	size = ft_lstsize(*stack_a);
	tmp = *stack_a;
	i = 0;
	index_max = size - 1;
	get_index(stack_a);
	while (tmp && tmp->index != index_max)
	{
		i++;
		tmp = tmp->next;
	}
	if (i == 1)
		reverse_rotate_a(stack_a);
	if (i == 0)
		rotate_a(stack_a);
	if (is_sort(*stack_a))
		return ;
	swap_a(stack_a);
}

void	sort_5(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	get_index(stack_a);
	while (i <= ft_lstsize(*stack_a))
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a);
		i++;
	}
	if (is_sort(*stack_b))
		rotate_b(stack_b);
	sort_3(stack_a);
	while (*stack_b)
		push_a(stack_b, stack_a);
}
