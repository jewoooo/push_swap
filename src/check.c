/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:59:37 by jewlee            #+#    #+#             */
/*   Updated: 2024/01/31 22:09:19 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_duplicate(t_stack *stack, int num)
{
	int		i;
	t_node	*temp;

	if (stack->size == 0)
		return (0);
	i = 0;
	temp = stack->bottom;
	while (i < stack->size)
	{
		if (temp->data == num)
			return (1);
		temp = temp->next;
		i++;
	}
	return (0);
}
