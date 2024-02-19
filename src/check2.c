/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 19:08:04 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/19 12:52:39 by jewlee           ###   ########.fr       */
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
		if (s[i] >= '0' && s[i] <= '9')
			digit_flag = 1;
	}
	if (digit_flag == 0)
		return (0);
	return (1);
}

int	is_alpha(char **s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i] != NULL)
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			if ((s[i][j] >= 'a' && s[i][j] <= 'z')
				|| (s[i][j] >= 'A' && s[i][j] <= 'Z'))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
