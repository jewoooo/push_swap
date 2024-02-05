/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:20:01 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 13:19:52 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	reverse_rotate(t_stack **stack)
{
	t_node	*stack_bottom;

	if ((*stack)->size < 2)
		return (1);
	stack_bottom = (*stack)->bottom;
	(*stack)->bottom = stack_bottom->next;
	(*stack)->top = stack_bottom;
	return (0);
}

void	rra(t_stack **stack_a)
{
	if (reverse_rotate(stack_a) == 1)
		return ;
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	if (reverse_rotate(stack_b) == 1)
		return ;
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}
