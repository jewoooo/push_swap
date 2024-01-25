/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_method1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:01:36 by jewlee            #+#    #+#             */
/*   Updated: 2024/01/25 22:38:17 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return (NULL);
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	create_stack(t_stack **stack)
{
	(*stack) = (t_stack *)malloc(sizeof(t_stack));
	if ((*stack) == NULL)
		return ;
	(*stack)->size = 0;
	(*stack)->head = NULL;
	(*stack)->top = NULL;
}

void	destroy_node(t_node *node)
{
	free(node);
	node = NULL;
}

void	destroy_stack(t_stack **stack)
{
	t_node	*temp;

	while ((*stack)->head != (*stack)->top)
	{
		temp = (*stack)->head;
		(*stack)->head = temp->next;
		destroy_node(temp);
	}
	destroy_node((*stack)->Top);
	free((*stack));
	(*stack) = NULL;
}

void	push_front(t_stack *stack, t_node *new)
{
	if (stack->head == NULL)
	{
		new->next = new;
		new->prev = new;
		stack->top = new;
	}
	else
	{
		new->next = stack->head;
		new->prev = stack->top;
		stack->head->prev = new;
		stack->top->next = new;
	}
	(stack->size)++;
	stack->head = new;
}
