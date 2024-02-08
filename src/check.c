/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:59:37 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/09 05:47:08 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long long	for_flag(int *flag)
{
	(*flag) = 1;
	return (0);
}

int	atoi_for_push_swap(const char *str, int *not_int_flag)
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
		res = for_flag(not_int_flag);
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

int	is_space(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != NULL)
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if (s[i][j] == ' ')
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
