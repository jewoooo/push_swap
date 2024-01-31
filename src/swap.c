/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 22:05:05 by jewlee            #+#    #+#             */
/*   Updated: 2024/01/31 22:28:00 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	swap(t_stack **stack)
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
	if (ft_printf("sa\n") == (-1))
		print_error();
}

void	sb(t_stack **stack_b)
{
	if (swap(stack_b) == 1)
		return ;
	if (ft_printf("sb\n") == (-1))
		print_error();
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	if (ft_printf("ss\n") == (-1))
		print_error();
}
