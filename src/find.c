/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:13:48 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/06 16:17:47 by jewlee           ###   ########.fr       */
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
	t_node		*tmp1;
	t_node		*tmp2;

	index = 1;
	if (num > b->top->data && num < b->bottom->data)
		index = 0;
	else if (num > max(b) || num < min(b))
		index = find_index(b, max(b));
	else
	{
		tmp1 = b->top;
		tmp2 = b->top->prev;
		while (1)
		{
			if (tmp1->data > num && tmp2->data < num)
				break ;
			tmp1 = tmp1->prev;
			tmp2 = tmp2->prev;
			index++;
		}
	}
	return (index);
}

int	find_place_a(t_stack *a, int num)
{
	int		index;
	t_node	*tmp1;
	t_node	*tmp2;

	index = 1;
	if (num < a->top->data && num > a->bottom->data)
		index = 0;
	else if (num > max(a) || num < min(a))
		index = find_index(a, max(a));
	else
	{
		tmp1 = a->top;
		tmp2 = a->top->prev;
		while (1)
		{
			if (tmp1->data < num && tmp2->data > num)
				break ;
			tmp1 = tmp1->prev;
			tmp2 = tmp2->prev;
			index++;
		}
	}
	return (index);
}
