/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 11:12:34 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/18 20:29:13 by jewlee           ###   ########.fr       */
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

int	parsing_to_array(int **array, int size, char **argv)
{
	int		i;
	int		tmp;
	int		flag;

	if (size != 1 && (is_space(argv) == 1 || is_alpha(argv) == 1))
		return (0);
	(*array) = (int *)malloc(sizeof(int) * (size));
	if ((*array) == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		flag = 0;
		tmp = atoi_for_push_swap(argv[i], &flag);
		if (flag == 1)
			return (0);
		(*array)[i] = tmp;
		i++;
	}
	if (is_duplicated(*array, size) == 1)
		return (0);
	if (change_to_index(array, size) == 0)
		return (0);
	return (1);
}

char	**change_string(int *argc, char **argv)
{
	int		cnt;
	char	**nums;

	if (check_string(*argv) == 1)
		return (NULL);
	nums = ft_split(*argv, ' ');
	if (nums == NULL)
		return (NULL);
	cnt = 0;
	while (nums[cnt] != NULL)
		cnt++;
	(*argc) = cnt;
	return (nums);
}

int	parsing_to_stack(t_stack **a, int argc, char **argv)
{
	int		i;
	int		*array;

	array = NULL;
	if (argc == 1)
		argv = change_string(&argc, argv);
	if (argv == NULL || parsing_to_array(&array, argc, argv) == 0)
	{
		if (array != NULL)
			free(array);
		return (0);
	}
	i = -1;
	while (++i < argc)
	{
		if (push_front(a, array[i]) == 0)
		{
			free(array);
			free_stack(a);
			return (0);
		}
	}
	free(array);
	return (1);
}
