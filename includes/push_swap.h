/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzaccome <lzaccome@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 20:52:14 by lzaccome          #+#    #+#             */
/*   Updated: 2021/10/25 22:04:26 by lzaccome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct s_list
{
	int				index;
	int				number;
	struct s_list	*next;
}				t_list;

			//SRCS//

/* main.c */
int		main(int argc, char **argv);
void	sort(t_list **stack_a, t_list **stack_b, int size_list);

/* fill_list */
t_list	*ft_lstnew(int number);
void	free_stack(t_list **stack);
t_list	*fill_stack(int ac, char **av);

/* list_action1.c */
void	swap_a(t_list **list);
void	swap_b(t_list **list);
void	swap_swap(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	push_a(t_list **stack_b, t_list **stack_a);

/* list_action2.c */
void	rotate_a(t_list **stack_a);
void	rotate_b(t_list **stack_b);
void	rotate_rotate(t_list **stack_a, t_list **stack_b);
void	reverse_rotate_a(t_list **stack_a);
void	reverse_rotate_b(t_list **stack_a);

/* list_action3.c */
void	reverse_reverse(t_list **stack_a, t_list **stack_b);

/* list_manip */
void	ft_lstadd_front(t_list **list, t_list *new);
void	ft_lstadd_back(t_list **list, t_list *new);
int		delete_first(t_list **list);

/* list_calc */
int		ft_lstsize(t_list *lst);
int		is_sort(t_list *lst);
void	get_index(t_list **lst);
int		check_double(t_list *stack_a);

/* sort_short */
void	sort_2(t_list **stack_a);
void	sort_3(t_list **stack_a);
void	sort_5(t_list **stack_a, t_list **stack_b);

/* radix.c */
void	sort_big(t_list **stack_a, t_list **stack_b);
int		max_bit_calc(int size);

			//UTILS//

/* display */
int		display_liste(t_list *list);

/* atoi */
int		ft_atoi(const char *str, int *ret, long res);

#endif