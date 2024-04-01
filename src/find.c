/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:13:48 by jewlee            #+#    #+#             */
/*   Updated: 2024/03/28 17:25:52 by jewlee           ###   ########.fr       */
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

int	find_place(t_stack *a, int num)
{
	int		index;
	t_node	*up;
	t_node	*down;

	if (num < a->top->data && num > a->bottom->data)
		index = 0;
	else if (num > s_max(a) || num < s_min(a))
		index = find_index(a, s_min(a));
	else
	{
		index = 0;
		up = a->top;
		down = a->top->prev;
		while (index < a->size)
		{
			index++;
			if (up->data < num && down->data > num)
				break ;
			up = up->prev;
			down = down->prev;
		}
	}
	return (index);
}
