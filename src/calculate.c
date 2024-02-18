/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:02:41 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/18 18:48:01 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	case_rarb(t_stack *b, t_stack *a, int num)
{
	int	times;

	times = find_place(a, num);
	if (times < find_index(b, num))
		times = find_index(b, num);
	return (times);
}

int	case_rrarrb(t_stack *b, t_stack *a, int num)
{
	int	times;

	times = 0;
	if (find_place(a, num) != 0)
		times = a->size - find_place(a, num);
	if (times < (b->size - find_index(b, num)) && find_index(b, num) != 0)
		times = (b->size - find_index(b, num));
	return (times);
}

int	case_rrarb(t_stack *b, t_stack *a, int num)
{
	int	times;

	times = 0;
	if (find_place(a, num) != 0)
		times = a->size - find_place(a, num);
	times += find_index(b, num);
	return (times);
}

int	case_rarrb(t_stack *b, t_stack *a, int num)
{
	int	times;

	times = 0;
	if (find_index(b, num) != 0)
		times = b->size - find_index(b, num);
	times += find_place(a, num);
	return (times);
}

int	calculate_cheapest_ba(t_stack *b, t_stack *a)
{
	int		cheapest;
	int		size;
	t_node	*tmp;

	tmp = b->top;
	size = b->size;
	cheapest = case_rrarrb(b, a, tmp->data);
	while (size > 0)
	{
		if (cheapest > case_rarb(b, a, tmp->data))
			cheapest = case_rarb(b, a, tmp->data);
		if (cheapest > case_rrarrb(b, a, tmp->data))
			cheapest = case_rrarrb(b, a, tmp->data);
		if (cheapest > case_rarrb(b, a, tmp->data))
			cheapest = case_rarrb(b, a, tmp->data);
		if (cheapest > case_rrarb(b, a, tmp->data))
			cheapest = case_rrarb(b, a, tmp->data);
		tmp = tmp->prev;
		size--;
	}
	return (cheapest);
}
