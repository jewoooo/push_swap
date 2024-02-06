/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:42:02 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/06 14:38:33 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	create_stack(t_stack **stack)
{
	(*stack) = (t_stack *)malloc(sizeof(t_stack));
	if ((*stack) == NULL)
		return (0);
	(*stack)->size = 0;
	(*stack)->top = NULL;
	(*stack)->bottom = NULL;
	return (1);
}

void	free_stack(t_stack **stack)
{
	t_node	*tmp;
	t_node	*for_free;
	int		i;

	if (*stack != NULL)
	{
		if ((*stack)->size != 0)
		{
			for_free = (*stack)->bottom;
			i = (*stack)->size;
			while (i > 1)
			{
				tmp = for_free->next;
				free(for_free);
				for_free = tmp;
				i--;
			}
			free(for_free);
		}
		free(*stack);
		(*stack) = NULL;
	}
}

int	push_front(t_stack **stack, int num)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (new_node == NULL)
		return (0);
	new_node->data = num;
	if ((*stack)->size == 0)
	{
		(*stack)->top = new_node;
		new_node->prev = new_node;
		new_node->next = new_node;
	}
	else
	{
		new_node->next = (*stack)->bottom;
		new_node->prev = (*stack)->top;
		(*stack)->top->next = new_node;
		(*stack)->bottom->prev = new_node;
	}
	(*stack)->bottom = new_node;
	((*stack)->size)++;
	return (1);
}
