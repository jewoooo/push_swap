/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:08:04 by jewlee            #+#    #+#             */
/*   Updated: 2024/03/07 18:07:47 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_string(char *s)
{
	int	i;
	int	digit_flag;

	i = -1;
	digit_flag = 0;
	while (s[++i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
			|| (s[i] >= 'A' && s[i] <= 'Z'))
			return (0);
		if ((s[i] < '0' || s[i] > '9')
			&& s[i] != ' ' && s[i] != '+' && s[i] != '-')
			return (0);
		if (s[i] >= '0' && s[i] <= '9')
			digit_flag = 1;
	}
	if (digit_flag == 0)
		return (0);
	return (1);
}

int	is_duplicated(int *array, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sorted(t_stack *stack)
{
	t_node	*tmp1;
	t_node	*tmp2;
	int		i;

	tmp1 = stack->bottom;
	tmp2 = stack->bottom->next;
	i = 1;
	while (i < stack->size)
	{
		if (tmp1->data < tmp2->data)
			return (0);
		tmp1 = tmp1->next;
		tmp2 = tmp2->next;
		i++;
	}
	return (1);
}
