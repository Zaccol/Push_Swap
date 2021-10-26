/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_action3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 05:09:57 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 06:09:42 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_reverse(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a != NULL && *stack_b != NULL)
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_b(stack_b);
	}
}
