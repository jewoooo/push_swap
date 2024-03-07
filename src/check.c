/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:59:37 by jewlee            #+#    #+#             */
/*   Updated: 2024/03/07 18:30:20 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	count_plus_minus(char *s, int *not_int_flag)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = -1;
	while (s[++i] != '\0' && ft_isdigit(s[i]) == 0)
		if (s[i] == '+' || s[i] == '-')
			cnt++;
	if (cnt > 1)
		*not_int_flag = 1;
}

void	check_minus(char **s, int *flag)
{
	if (**s == '-' && (*(*s + 1) >= '0' && *(*s + 1) <= '9'))
	{
		(*flag) = -1;
		(*s)++;
	}
	else if (**s == '+' && (*(*s + 1) >= '0' && *(*s + 1) <= '9'))
		(*s)++;
}

int	atoi_for_push_swap(char *str, int *not_int_flag)
{
	int			flag;
	long long	res;

	flag = 1;
	count_plus_minus(str, not_int_flag);
	if (*not_int_flag == 1)
		return (0);
	check_minus(&str, &flag);
	res = 0;
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += (*str - '0');
		str++;
	}
	if (*str != '\0')
		*not_int_flag = 1;
	res *= flag;
	if (res > INT_MAX || res < INT_MIN)
		*not_int_flag = 1;
	return ((int)res);
}

int	check_argv(char **s)
{
	int	i;
	int	j;

	i = -1;
	while (s[++i] != NULL)
	{
		j = -1;
		while (s[i][++j] != '\0')
		{
			if (s[i][j] == ' ')
				return (0);
			else if (ft_isalpha(s[i][j]) == 1)
				return (0);
		}
	}
	return (1);
}
