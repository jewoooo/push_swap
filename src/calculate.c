/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:02:41 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 13:52:39 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calculate_a_to_b(t_stack *a, t_stack *b)
{
	int			min;
	int			size;
	t_node		*tmp;

	tmp = a->top;
	size = a->size;
	min = case_rrarrb(a, b, tmp->data);
	while (size > 0)
	{
		if (min > case_rarb(a, b, tmp->data))
			min = case_rarb(a, b, tmp->data);
		if (min > case_rrarrb(a, b , tmp->data))
			min = case_rrarrb(a, b, tmp->data);
		if (min > case_rarrb(a, b, tmp->data))
			min = case_rarrb(a, b, tmp->data);
		if (min > case_rrarb(a, b, tmp->data))
			min = case_rrarb(a, b, tmp->data);
		tmp = tmp->prev;
		size--;
	}
	return (min);
}

int	calculate_b_to_a(t_stack *a, t_stack *b)
{
	int		min;
	int		size;
	t_node	*tmp;

	tmp = b->top;
	size = b->size;
	min = case_rrarrb(a, b, tmp->data);
	while (size > 0)
	{
		if (min > case_rarb_a(a, b, tmp->data))
			min = case_rarb_a(a, b, tmp->data);
		if (min > case_rrarrb_a(a, b, tmp->data))
			min = case_rrarrb_a(a, b, tmp->data);
		if (min > case_rarrb_a(a, b, tmp->data))
			min = case_rarrb_a(a, b, tmp->data);
		if (min > case_rrarb_a(a, b, tmp->data))
			min = case_rarrb_a(a, b, tmp->data);
		tmp = tmp->prev;
		size--;
	}
	return (min);
}
