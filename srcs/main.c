/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:47:32 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 06:04:39 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort(t_list **stack_a, t_list **stack_b, int size_list)
{
	if (!(is_sort(*stack_a)))
	{
		if (size_list == 2)
			sort_2(stack_a);
		else if (size_list <= 3)
			sort_3(stack_a);
		else if (size_list <= 5)
			sort_5(stack_a, stack_b);
		else if (size_list > 5)
			sort_big(stack_a, stack_b);
	}
	free_stack(stack_a);
}

int	main(int argc, char **argv)
{
	int		size_list;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
	stack_a = NULL;
	if (argc == 1)
		return (0);
	stack_a = fill_stack(argc, argv);
	if (stack_a == NULL)
	{
		write(2, "\e[1;5;31mError\e[0m\n", 20);
		return (0);
	}
	size_list = ft_lstsize(stack_a);
	get_index(&stack_a);
	if (check_double(stack_a))
	{
		write(2, "\e[1;5;31mError\e[0m\n", 20);
		free_stack(&stack_a);
		return (0);
	}
	sort(&stack_a, &stack_b, size_list);
	return (0);
}
