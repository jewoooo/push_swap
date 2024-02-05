/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:44:49 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 23:10:03 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	do_rarb(t_stack **a, t_stack **b, int num, char c)
{
	if (c == 'a')
	{
		while ((*a)->data != num && find_place_b (*b, num) > 0)
			rr(a, b);
		while ((*a)->data != num)
			ra(a);
		while (find_place_b(*b, num) > 0)
			rb(b);
		pb(b, a);
	}
	else
	{
		while ((*b)->data != num && find_place_a(*a, num) > 0)
			rr(a, b);
		while ((*b)->data != num)
			rb(b);
		while (find_place_a(*a, num) > 0)
			ra(a);
		pa(a, b);
	}
	return (-1);
}

int	do_rrarrb(t_stack **a, t_stack **b, int num, char c)
{
	if (c == 'a')
	{
		while ((*a)->data != num && find_place_b(*b, num) > 0)
			rrr(a, b);
		while ((*a)->data != num)
			rra(a);
		while (find_place_b(*b, num) > 0)
			rrb(b);
		pb(b, a);
	}
	else
	{
		while ((*b)->data != num && find_place_a(*a, num) > 0)
			rrr(a, b);
		while ((*b)->data != num)
			rrb(b);
		while (find_place_a(*a, c) > 0)
			rra(a);
		pa(a, b);
	}
	return (-1);
}

int	do_rrarb(t_stack **a, t_stack **b, int num, char c)
{
	if (c == 'a')
	{
		while ((*a)->data != num)
			rra(a);
		while (find_place_b(*b, num) > 0)
			rb(b);
		pb(b, a);
	}
	else
	{
		while (find_place_a(*a, num) > 0)
			rra(a);
		while ((*b)->data != num)
			rb(b);
		pa(a, b);
	}
	return (-1);
}

int	do_rarrb(t_stack **a, t_stack **b, int num, char c)
{
	if (c == 'a')
	{
		while ((*a)->data != num)
			ra(a);
		while (find_place_b(*b, num) > 0)
			rrb(b);
		pb(b, a);
	}
	else
	{
		while (find_place_a(*a, num) > 0)
			ra(a);
		while ((*b)->data != num)
			rrb(b);
		pa(a, b);
	}
	return (-1);
}