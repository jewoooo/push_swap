/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_utils_ba.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 23:21:46 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/05 23:27:52 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	case_rarb_a(t_stack *b, t_stack *a, int num)
{
	int	times;

	times = 0;
	times = find_index(b, num) + find_place_a(a, num);
	return (times);
}

int	case_rrarrb_a(t_stack *b, t_stack *a, int num)
{
	int	times;

	times = 0;
	if (find_place_a(b, num) != 0)
		times = a->size - find_place_a(b, num);
	if (find_index(b, num) != 0)
		times += (b->size - find_index(b, num));
	return (times);
}

int	case_rrarb_a(t_stack *b, t_stack *a, int num)
{
	int	times;

	times = 0;
	if (find_index(b, num) != 0)
		times = b->size - find_index(b, num);
	times += find_place_a(a, num);
	return (times);
}

int	case_rarrb_a(t_stack *b, t_stack *a, int num)
{
	int	times;

	times = 0;
	if (find_place_a(a, num) != 0)
		times = a->size - find_place_a(a, num);
	times += find_index(b, num);
	return (times);
}