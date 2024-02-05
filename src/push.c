/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:07:05 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 13:19:28 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	push(t_stack **from, t_stack **to)
{
	t_node	*from_top;

	if ((*from)->size == 0)
		return (1);
	from_top = (*from)->top;
	from_top->prev->next = from_top->next;
	(*from)->bottom->prev = from_top->prev;
	((*from)->size)--;
	from_top->prev = (*to)->top;
	from_top->next = (*to)->bottom;
	(*to)->top->prev->next = from_top;
	(*to)->bottom->prev = from_top;
	((*to)->size)++;
	return (0);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_a, stack_b) == 1)
		return ;
	ft_printf("pa\n");
}

void	pb(t_stack **stack_b, t_stack **stack_a)
{
	if (push(stack_b, stack_a) == 1)
		return ;
	ft_printf("pb\n");
}
