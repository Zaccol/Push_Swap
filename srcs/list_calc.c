/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_calc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 04:38:20 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 21:47:38 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/push_swap.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

int	is_sort(t_list *lst)
{
	while (lst)
	{
		if (lst->next && lst->number > lst->next->number)
			return (0);
		lst = lst->next;
	}
	return (1);
}

void	get_index(t_list **lst)
{
	int		index;
	int		number;
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = *lst;
	index = 0;
	while (tmp)
	{
		index = 0;
		number = tmp->number;
		while (tmp2)
		{
			if (number > tmp2->number)
				index += 1;
			tmp2 = tmp2->next;
		}
		tmp2 = *lst;
		tmp->index = index;
		tmp = tmp->next;
	}
}

int	check_double(t_list *stack_a)
{
	int		num;
	t_list	*tmp1;
	t_list	*tmp2;

	tmp1 = stack_a;
	tmp2 = NULL;
	while (tmp1)
	{
		num = tmp1->number;
		if (tmp1->next)
			tmp2 = tmp1->next;
		while (tmp2)
		{
			if (num == tmp2->number)
				return (1);
			tmp2 = tmp2->next;
		}
		tmp1 = tmp1->next;
	}
	return (0);
}
