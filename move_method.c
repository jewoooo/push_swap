/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_method.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:02:23 by jewlee            #+#    #+#             */
/*   Updated: 2024/01/25 22:48:02 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the first 2 elements at the top of stack a.
void	stack_swap(t_stack *stack)
{
	int	tmp;

	if (is_empty(stack) == 1 || is_one(stack) == 1)
		return ;
	tmp = stack->top->data;
	stack->top->data = (stack->top)->prev->data;
	(stack->top)->prev->data = tmp;
}

// Take the first element at the top of b and put it at the top of a.
void	move_top(t_stack *from, t_stack *to)
{
	t_node	*top_element;

	if (is_empty(from) == 1)
		return ;
	top_element = from->top;
	top_element->prev = to->top;
	top_element->next = to->head;
	to->head->prev = top_element;
	to->top->next = top_element;
	to->top = top_element;
	from->top->prev->next = from->head;
	from->head->prev = from->top->prev;
	(from->size)--;
	(to->size)++;
}

// Shift up all elements of stack a by 1.
void	stack_rotate(t_stack *stack)
{
	t_node	*tmp;

	if (is_empty(stack) == 1 || is_one(stack) == 1)
		return ;
	tmp = stack->top;
	stack->head = stack->top;
	stack->top = tmp->prev;
}

// Shift down all elements of stack a by 1.
void	stack_reverse_rotate(t_stack *stack)
{
	t_node	*tmp;

	if (is_empty(stack) == 1 || is_one(stack) == 1)
		return ;
	tmp = stack->head;
	stack->head = stack->top;
	stack->head->prev = tmp;
}
