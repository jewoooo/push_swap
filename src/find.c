/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:13:48 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/06 23:13:00 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_index(t_stack *stack, int num)
{
	int		index;
	t_node	*tmp;

	tmp = stack->top;
	index = 0;
	while (tmp->data != num)
	{
		index++;
		tmp = tmp->prev;
	}
	return (index);
}

int	find_place_b(t_stack *b, int num)
{
	int			index;
	t_node		*up;
	t_node		*down;

	if (num > b->top->data && num < b->bottom->data)
		index = 0;
	else if (num > max(b) || num < min(b))
		index = find_index(b, max(b));
	else
	{
		index = 1;
		up = b->top;
		down = up->prev;
		while (up->data > num || num > down->data)
		{
			up = up->next;
			down = down->next;
			index++;
		}
	}
	return (index);
}

int	find_place_a(t_stack *a, int num)
{
	int		index;
	t_node	*up;
	t_node	*down;

	if (num < a->top->data && num > a->bottom->data)
		index = 0;
	else if (num > max(a) || num < min(a))
		index = find_index(a, max(a));
	else
	{
		index = 1;
		up = a->top;
		down = a->top->prev;
		while (up->data < num || num < down->data)
		{
			up = up->prev;
			down = down->prev;
			index++;
		}
	}
	return (index);
}
