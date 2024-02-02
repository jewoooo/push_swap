/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:59:37 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/02 16:32:22 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_duplicate(t_stack *stack, int num)
{
	int		i;
	t_node	*temp;

	if (stack->size == 0)
		return (0);
	i = 0;
	temp = stack->bottom;
	while (i < stack->size)
	{
		if (temp->data == num)
			return (1);
		temp = temp->next;
		i++;
	}
	return (0);
}

int	check_sorted(t_stack *stack)
{
	t_node	*node;
	int	num;

	node = stack->bottom;
	num = node->data;
	node = node->next;
	while (node != stack->bottom)
	{
		if (num > node->data)
			return (0);
		num = node->data;
		node = node->next;
	}
	return (1);
}
