/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:59:37 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/06 13:52:44 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	atoi_for_push_swap(const char *str)
{
	int			flag;
	long long	res;

	flag = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' && (*(str + 1) >= '0' && *(str + 1) <= '9'))
	{
		flag = 1;
		str++;
	}
	else if (*str == '+' && (*(str + 1) >= '0' && *(str + 1) <= '9'))
		str++;
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += (*str - '0');
		str++;
	}
	if (flag == 1)
		res *= (-1);
	if (res > 2147483647 || res < -2147483648)
		return (0);
	return ((int)res);
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
