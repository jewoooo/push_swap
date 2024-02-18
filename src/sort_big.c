/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:10:16 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/18 18:46:33 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	a_to_b(t_stack **a, t_stack **b)
{
	int	pivot;

	if ((*a)->size >= 5 && (*a)->size > 3 && is_sorted(*a) == 0)
		pb(a, b);
	if ((*a)->size >= 4 && (*a)->size > 3 && is_sorted(*a) == 0)
		pb(a, b);
	pivot = ((*a)->size + (*b)->size) / 3;
	while ((*a)->size > pivot && is_sorted(*a) == 0 && (*a)->size > 3)
	{
		if ((*a)->top->data >= pivot * 2)
			pb(a, b);
		else if ((*a)->top->data <= pivot)
		{
			pb(a, b);
			rb(b);
		}
		else
			ra(a);
	}
	while ((*a)->size > 3 && is_sorted(*a) == 0)
		pb(a, b);
	if ((*a)->size == 3)
		sort_three(a);
}

void	b_to_a(t_stack **b, t_stack **a)
{
	int		times;
	t_node	*tmp;

	while ((*b)->size > 0)
	{
		tmp = (*b)->top;
		times = calculate_cheapest_ba(*b, *a);
		while (times >= 0)
		{
			if (times == case_rarb(*b, *a, tmp->data))
				times = do_rarb(a, b, tmp->data);
			else if (times == case_rrarrb(*b, *a, tmp->data))
				times = do_rrarrb(a, b, tmp->data);
			else if (times == case_rrarb(*b, *a, tmp->data))
				times = do_rrarb(a, b, tmp->data);
			else if (times == case_rarrb(*b, *a, tmp->data))
				times = do_rarrb(a, b, tmp->data);
			else
				tmp = tmp->next;
		}
	}
	if ((*b)->size == 0)
		free_stack(b);
}

int	sort(t_stack **stack_a)
{
	t_stack	*stack_b;
	int		min_location;

	if ((*stack_a)->size == 2)
		sort_two(stack_a);
	else if ((*stack_a)->size == 3)
		sort_three(stack_a);
	else if ((*stack_a)->size > 3)
	{
		if (create_stack(&stack_b) == 0)
			return (0);
		a_to_b(stack_a, &stack_b);
		b_to_a(&stack_b, stack_a);
		min_location = find_index(*stack_a, min(*stack_a));
		if (min_location < (*stack_a)->size - min_location)
			while ((*stack_a)->top->data != min((*stack_a)))
				ra(stack_a);
		else
			while ((*stack_a)->top->data != min((*stack_a)))
				rra(stack_a);
	}
	if (is_sorted(*stack_a) == 0)
		return (0);
	return (1);
}
