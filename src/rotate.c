/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:25:53 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 23:25:43 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	rotate(t_stack **stack)
{
	t_node	*stack_top;

	if ((*stack)->size < 2)
		return (1);
	stack_top = (*stack)->top;
	(*stack)->top = stack_top->prev;
	(*stack)->bottom = stack_top;
	return (0);
}

void	ra(t_stack **stack_a)
{
	if (rotate(stack_a) == 1)
		return ;
	ft_printf("ra\n");
}

void	rb(t_stack **stack_b)
{
	if (rotate(stack_b) == 1)
		return ;
	ft_printf("rb\n");
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr\n");
}
