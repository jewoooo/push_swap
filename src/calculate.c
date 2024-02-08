/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:02:41 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/08 19:38:16 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// without 1 push

int	calculate_cheapest_ab(t_stack *a, t_stack *b)
{
	int		min;
	int		size;
	t_node	*tmp;

	size = a->size;
	tmp = a->top;
	min = case_rrarrb(a, b, tmp->data);
	while (size > 0)
	{
		if (min > case_rarb(a, b, tmp->data))
			min = case_rarb(a, b, tmp->data);
		if (min > case_rrarrb(a, b, tmp->data))
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

int	calculate_cheapest_ba(t_stack *b, t_stack *a)
{
	int		cheapest;
	int		size;
	t_node	*tmp;

	tmp = b->top;
	size = b->size;
	cheapest = case_rrarrb_a(b, a, tmp->data);
	while (size > 0)
	{
		if (cheapest > case_rarb_a(b, a, tmp->data))
			cheapest = case_rarb_a(b, a, tmp->data);
		if (cheapest > case_rrarrb_a(b, a, tmp->data))
			cheapest = case_rrarrb_a(b, a, tmp->data);
		if (cheapest > case_rarrb_a(b, a, tmp->data))
			cheapest = case_rarrb_a(b, a, tmp->data);
		if (cheapest > case_rrarb_a(b, a, tmp->data))
			cheapest = case_rrarb_a(b, a, tmp->data);
		tmp = tmp->prev;
		size--;
	}
	return (cheapest);
}
