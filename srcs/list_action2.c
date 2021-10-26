/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_action2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 05:06:42 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 06:09:18 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/push_swap.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*tmp;

	if (!*stack_a || ft_lstsize(*stack_a) < 2)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_a, tmp);
	write(1, "ra\n", 3);
}

void	rotate_b(t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b || ft_lstsize(*stack_b) < 2)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack_b, tmp);
	write(1, "rb\n", 3);
}

void	rotate_rotate(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL && *stack_b != NULL)
	{
		rotate_a(stack_a);
		rotate_b(stack_b);
	}
}

void	reverse_rotate_a(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;
	t_list	*new;

	first = *stack_a;
	second = *stack_a;
	if (!*stack_a || ft_lstsize(*stack_a) < 2)
		return ;
	while (first->next)
	{
		second = first;
		first = first->next;
	}
	second->next = NULL;
	new = first;
	ft_lstadd_front(stack_a, new);
	write(1, "rra\n", 4);
}

void	reverse_rotate_b(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;
	t_list	*new;

	first = *stack_a;
	second = *stack_a;
	if (!*stack_a || ft_lstsize(*stack_a) < 2)
		return ;
	while (first->next)
	{
		second = first;
		first = first->next;
	}
	second->next = NULL;
	new = first;
	ft_lstadd_front(stack_a, new);
}
