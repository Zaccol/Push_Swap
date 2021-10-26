/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_action1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 21:48:37 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 06:07:04 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/push_swap.h"

void	swap_a(t_list **list)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!*list || ft_lstsize(*list) < 2)
		return ;
	tmp1 = *list;
	tmp2 = (*list)->next;
	tmp1->next = (*list)->next->next;
	tmp2->next = tmp1;
	*list = tmp2;
	write(1, "sa\n", 3);
}

void	swap_b(t_list **list)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (!*list || ft_lstsize(*list) < 2)
		return ;
	tmp1 = *list;
	tmp2 = (*list)->next;
	tmp1->next = (*list)->next->next;
	tmp2->next = tmp1;
	*list = tmp2;
}

void	swap_swap(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL && *stack_b != NULL)
	{
		swap_a(stack_a);
		swap_a(stack_b);
	}
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (*stack_a == NULL)
		return ;
	tmp1 = *stack_a;
	tmp2 = *stack_b;
	*stack_a = (*stack_a)->next;
	*stack_b = tmp1;
	(*stack_b)->next = tmp2;
	write(1, "pb\n", 3);
}

void	push_a(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (*stack_b == NULL)
	{
		return ;
	}
	tmp1 = *stack_b;
	tmp2 = *stack_a;
	*stack_b = (*stack_b)->next;
	*stack_a = tmp1;
	(*stack_a)->next = tmp2;
	write(1, "pa\n", 3);
}
