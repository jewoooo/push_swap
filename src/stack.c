/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:42:02 by jewlee            #+#    #+#             */
/*   Updated: 2024/01/31 22:05:38 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	create_stack(t_stack **stack)
{
	(*stack) = (t_stack *)malloc(sizeof(t_stack));
	if ((*stack) == NULL)
		return (1);
	(*stack)->size = 0;
	(*stack)->top = NULL;
	(*stack)->bottom = NULL;
	return (0);
}

int	push_front(t_stack **stack, int num)
{
	t_node	*new_node;

	if (check_duplicate(*stack, num) == 1)
		return (1);
	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return (1);
	new_node->data = num;
	if ((*stack)->bottom == NULL)
	{
		(*stack)->top = new_node;
		new_node->prev = new_node;
		new_node->next = new_node;
	}
	else
	{
		new_node->next = (*stack)->bottom;
		new_node->prev = (*stack)->top;
		(*stack)->top->prev = new_node;
		(*stack)->bottom->prev = new_node;
	}
	(*stack)->bottom = new_node;
	((*stack)->size)++;
	return (0);
}
