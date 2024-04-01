/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:39:56 by jewlee            #+#    #+#             */
/*   Updated: 2024/03/28 17:25:30 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"
# include <stdio.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_node
{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		size;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

int		create_stack(t_stack **stack);
int		push_front(t_stack **stack, int num);
void	free_stack(t_stack **stack);

int		calculate_cheapest_ba(t_stack *b, t_stack *a);

int		case_rarb(t_stack *b, t_stack *a, int num);
int		case_rrarrb(t_stack *b, t_stack *a, int num);
int		case_rrarb(t_stack *b, t_stack *a, int num);
int		case_rarrb(t_stack *b, t_stack *a, int num);

int		do_rarb(t_stack **a, t_stack **b, int num);
int		do_rrarrb(t_stack **a, t_stack **b, int num);
int		do_rrarb(t_stack **a, t_stack **b, int num);
int		do_rarrb(t_stack **a, t_stack **b, int num);

int		atoi_for_push_swap(char *str, int *not_int_flag);
int		is_sorted(t_stack *stack);
int		is_duplicated(int *array, int n);
int		check_string(char *s);
int		check_argv(char **s);

int		parsing_to_stack(t_stack **a, int argc, char **argv);
int		parsing_to_array(int **array, int size,
			char **argv, int *flag_for_malloc);

int		free_all(int **array, char ***argv, int *flag_for_malloc);

int		s_max(t_stack *stack);
int		s_min(t_stack *stack);

int		find_index(t_stack *stack, int num);
int		find_place(t_stack *a, int num);

void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
int		sort(t_stack **stack_a);
void	a_to_b(t_stack **a, t_stack **b);
void	b_to_a(t_stack **b, t_stack **a);

void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif
