/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 22:44:49 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/18 18:55:40 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	do_rarb(t_stack **a, t_stack **b, int num)
{
	while ((*b)->top->data != num && find_place(*a, num) > 0)
		rr(a, b);
	while ((*b)->top->data != num)
		rb(b);
	while (find_place(*a, num) > 0)
		ra(a);
	pa(a, b);
	return (-1);
}

int	do_rrarrb(t_stack **a, t_stack **b, int num)
{
	while ((*b)->top->data != num && find_place(*a, num) > 0)
		rrr(a, b);
	while ((*b)->top->data != num)
		rrb(b);
	while (find_place(*a, num) > 0)
		rra(a);
	pa(a, b);
	return (-1);
}

int	do_rrarb(t_stack **a, t_stack **b, int num)
{
	while (find_place(*a, num) > 0)
		rra(a);
	while ((*b)->top->data != num)
		rb(b);
	pa(a, b);
	return (-1);
}

int	do_rarrb(t_stack **a, t_stack **b, int num)
{
	while (find_place(*a, num) > 0)
		ra(a);
	while ((*b)->top->data != num)
		rrb(b);
	pa(a, b);
	return (-1);
}
