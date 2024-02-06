/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:12:34 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/06 12:34:41 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	duplicate_array(int **arr1, int *arr2, int n)
{
	int	i;
	
	i = 0;
	while (i < n)
	{
		(*arr1)[i] = arr2[i];
		i++;
	}
}

int	change_to_index(int **array, int size)
{
	int	i;
	int	j;
	int	*tmp;

	tmp = (int *)calloc(size, sizeof(int));
	if (tmp == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if ((*array)[i] > (*array)[j] || i == j)
				tmp[i]++;
			j++;
		}
		i++;
	}
	duplicate_array(array, tmp, size);
	free(tmp);
	return (1);
}

int	parsing_to_array(int **array, int argc, char **argv)
{
	int	i;
	int	tmp;

	i = 1;
	while (i < argc)
	{
		tmp = atoi_for_push_swap(argv[i]);
		if (tmp == 0)
			return (0);
		(*array) = (int *)malloc(sizeof(int) * (argc - 1));
		if ((*array) == NULL)
			return (0);
		(*array)[i - 1] = tmp;
		i++;
	}
	if (is_duplicated(*array, argc - 1) == 1)
		return (0);
	if (change_to_index(array, argc - 1) == 0)
		return (0);
	return (1);
}

int	parsing_to_stack(t_stack **a, int argc, char **argv)
{
	int		i;
	int		*array;

	if (parsing_to_array(&array, argc, argv) == 0)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		if (push_front(a, array[i]) == 0)
			return (0);
		i++;
	}
	free(array);
	return (1);
}
