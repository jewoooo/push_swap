/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_method2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 20:53:18 by jewlee            #+#    #+#             */
/*   Updated: 2024/01/25 22:48:05 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_empty(t_stack *stack)
{
	if (stack->head == NULL)
		return (1);
	else
		return (0);
}

int	is_one(t_stack *stack)
{
	if (stack->head != NULL && stack->head == stack->top)
		return (1);
	else
		return (0);
}
