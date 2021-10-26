/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:11:01 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 06:25:00 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdlib.h>
#include <stdio.h>

int	max_bit_calc(int size)
{
	int		max_bit;
	int		max_num;

	max_bit = 0;
	max_num = (size - 1);
	while (max_num >> max_bit != 0)
		++max_bit;
	return (max_bit);
}

void	sort_big(t_list **stack_a, t_list **stack_b)
{
	int		max_bit;
	int		i;
	int		j;
	int		size;
	int		num;

	size = ft_lstsize(*stack_a);
	i = 0;
	max_bit = max_bit_calc(size);
	while (i < max_bit)
	{
		j = 0;
		while (j < size)
		{	
			num = (*stack_a)->index;
			if (((num >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_a(stack_b, stack_a);
		i++;
	}
}
