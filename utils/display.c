/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 04:47:57 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 06:31:02 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "../includes/push_swap.h"

int	display_liste(t_list *list)
{
	t_list	*current;

	current = list;
	if (list == NULL)
		return (0);
	while (current != NULL)
	{
		printf("%d -> ", current->number);
		current = current->next;
	}
	printf("NULL\n");
	current = list;
	printf("\nindex a : ");
	while (current != NULL)
	{
		printf("%d -> ", current->index);
		current = current->next;
	}
	return (0);
}
