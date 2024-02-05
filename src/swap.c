/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:05:05 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 13:21:02 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	swap(t_stack **stack)
{
	int		tmp;

	if ((*stack)->size < 2)
		return (1);
	tmp = (*stack)->top->data;
	(*stack)->top->data = (*stack)->top->prev->data;
	(*stack)->top->prev->data = tmp;
	return (0);
}

void	sa(t_stack **stack_a)
{
	if (swap(stack_a) == 1)
		return ;
	ft_printf("sa\n");
}

void	sb(t_stack **stack_b)
{
	if (swap(stack_b) == 1)
		return ;
	ft_printf("sb\n");
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}
