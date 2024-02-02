/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 18:02:41 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/02 20:40:25 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	calculate_a_to_b(t_stack *a, t_stack *b)
{
	int			i;
	int			size;
	t_stack		*tmp;

	tmp = a->top;
	size = a->size;
	i = case_rrarrb(a, b);
	while (size >= 0)
	{
		if (i > case_rarb(a, b, tmp->size))
			
	}
}
