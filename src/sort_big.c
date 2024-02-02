/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:10:16 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/02 16:45:47 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_to_b(t_stack **a, t_stack **b)
{
	while ((*a)->size > 3 && check_sorted(*a) == 0)
	{
		
	}
}

void	a_to_b(t_stack **a, t_stack **b)
{
	if ((*a)->size > 3 && check_sorted(*a) == 0)
		pb(a, b);
	if ((*a)->size > 3 && check_sorted(*a) == 0)
		pb(a, b);
	if ((*a)->size > 3 && check_sorted(*a) == 0)
		push_to_b(a, b);
	if (check_sorted(*a) == 0)
		sort_three(a);
}

int	sort(t_stack **stack_a)
{
	t_stack	*stack_b;

	if ((*stack_a)->size == 2)
		sort_two(stack_a);
	else if ((*stack_a)->size == 3)
		sort_three(stack_a);
	else if ((*stack_a)->size > 3)
	{
		if (create_stack(&stack_b) == 1)
			return (1);
		a_to_b(stack_a, &stack_b);
	}
}
