/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:59:37 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 15:51:51 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_stack *stack)
{
	int		num;
	t_node	*tmp;

	num = stack->bottom->data;
	tmp = stack->bottom->next;
	while (tmp != stack->bottom)
	{
		if (num < tmp->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
