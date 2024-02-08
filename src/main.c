/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:21:18 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/08 16:05:36 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	argv++;
	if (create_stack(&stack_a) == 0)
		return (1);
	if (parsing_to_stack(&stack_a, argc - 1, argv) == 0)
	{
		free_stack(&stack_a);
		ft_putendl_fd("Error", 2);
		return (1);
	}
	sort(&stack_a);
	/*
	if (sort(&stack_a) == 0)
	{
		free_stack(&stack_a);
		ft_putendl_fd("Error", 2);
		return (1);
	}
	*/
	free_stack(&stack_a);
	return (0);
}
