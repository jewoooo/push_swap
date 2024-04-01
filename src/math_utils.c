/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:18:51 by jewlee            #+#    #+#             */
/*   Updated: 2024/03/28 17:25:22 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	s_max(t_stack *stack)
{
	int		num;
	t_node	*tmp;

	tmp = stack->top;
	num = tmp->data;
	tmp = tmp->prev;
	while (tmp != stack->top)
	{
		if (num < tmp->data)
			num = tmp->data;
		tmp = tmp->prev;
	}
	return (num);
}

int	s_min(t_stack *stack)
{
	int		num;
	t_node	*tmp;

	tmp = stack->top;
	num = tmp->data;
	tmp = tmp->prev;
	while (tmp != stack->top)
	{
		if (num > tmp->data)
			num = tmp->data;
		tmp = tmp->prev;
	}
	return (num);
}
