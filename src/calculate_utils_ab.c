/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate_utils_ab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:12:48 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/07 14:20:31 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	case_rarb(t_stack *a, t_stack *b, int num)
{
	int	times;

	times = find_place_b(b, num);
	if (times < find_index(a, num))
		times = find_index(a, num);
	return (times);
}

int	case_rrarrb(t_stack *a, t_stack *b, int num)
{
	int	times;

	times = 0;
	if (find_place_b(b, num) != 0)
		times = b->size - find_place_b(b, num);
	if (times < (a->size - find_index(a, num) && find_index(a, num) != 0))
		times = (a->size - find_index(a, num));
	return (times);
}

int	case_rrarb(t_stack *a, t_stack *b, int num)
{
	int	times;

	times = 0;
	if (find_index(a, num) != 0)
		times = a->size - find_index(a, num);
	times += find_place_b(b, num);
	return (times);
}

int	case_rarrb(t_stack *a, t_stack *b, int num)
{
	int	times;

	times = 0;
	if (find_place_b(b, num) != 0)
		times = b->size - find_place_b(b, num);
	times += find_index(a, num);
	return (times);
}
