/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:39:56 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/06 13:55:55 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct	s_node
{
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct	s_stack
{
	int		size;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

int		create_stack(t_stack **stack);
int		push_front(t_stack **stack, int num);
void	free_stack(t_stack **stack);

int		calculate_cheapest_ab(t_stack *a, t_stack *b);
int		calculate_cheapest_ba(t_stack *b, t_stack *a);

int		case_rarb(t_stack *a, t_stack *b, int num);
int		case_rrarrb(t_stack *a, t_stack *b, int num);
int		case_rrarb(t_stack *a, t_stack *b, int num);
int		case_rarrb(t_stack *a, t_stack *b, int num);
int		case_rarb_a(t_stack *b, t_stack *a, int num);
int		case_rrarrb_a(t_stack *b, t_stack *a, int num);
int		case_rrarb_a(t_stack *b, t_stack *a, int num);
int		case_rarrb_a(t_stack *b, t_stack *a, int num);

int		do_rarb(t_stack **a, t_stack **b, int num, char c);
int		do_rrarrb(t_stack **a, t_stack **b, int num, char c);
int		do_rrarb(t_stack **a, t_stack **b, int num, char c);
int		do_rarrb(t_stack **a, t_stack **b, int num, char c);

int		atoi_for_push_swap(const char *str);
int		is_sorted(t_stack *stack);
int		is_duplicated(int *array, int n);

int		parsing_to_stack(t_stack **a, int argc, char **argv);
int		parsing_to_array(int **array, int argc, char **argv);

int		max(t_stack *stack);
int		min(t_stack *stack);
int		find_index(t_stack *stack, int num);
int		find_place_b(t_stack *b, int num);
int		find_place_a(t_stack *a, int num);

void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
int		sort(t_stack **stack_a);
void	a_to_b(t_stack **a, t_stack **b);
void	b_to_a(t_stack **b, t_stack **a);
void	push_b_till_3(t_stack **a, t_stack **b);

void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_b, t_stack **stack_a);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

#endif