/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:10:16 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 13:23:38 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
		sort_a_to_b(stack_a, &stack_b);
		sort_b_to_a(stack_a, &stack_b);
	}
	return (0);
}
