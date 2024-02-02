/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:13:48 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/02 20:40:22 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_index(t_stack *stack, int num)
{
	int	i;

	i = 0;
	while (stack->data != num)
	{
		i++;
		stack = stack->next;
	}
	stack->
}

int	find_place_b(t_stack *b, int num)
{
	int			i;
	t_stack		*tmp;

	i = 1;
	if (num > b->top->data && num < b->bottom->data)
		i = 0;
	else if (num > max(b) || num < min(b))
		i = find_index(b, max(b));
	else
}
