/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:48:15 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 23:30:55 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->top->data > (*a)->bottom->data)
		sa(a);
}

void	sort_three(t_stack **a)
{
	t_node	*middle;

	middle = (*a)->bottom->next;
	if ((*a)->top->data > middle->data && middle->data < (*a)->bottom->data
		&& (*a)->top->data < (*a)->bottom->data)
		sa(a);
	else if ((*a)->top->data > middle->data && middle->data > (*a)->bottom->data
		&& (*a)->top->data > (*a)->bottom->data)
	{
		sa(a);
		rra(a);
	}
	else if ((*a)->top->data > middle->data && middle->data < (*a)->bottom->data
		&& (*a)->top->data > (*a)->bottom->data)
		ra(a);
	else if ((*a)->top->data < middle->data && middle->data > (*a)->bottom->data
		&& (*a)->top->data < (*a)->bottom->data)
	{
		sa(a);
		ra(a);
	}
	else if ((*a)->top->data < middle->data && middle->data > (*a)->bottom->data
		&& (*a)->top->data > (*a)->bottom->data)
		rra(a);
}
