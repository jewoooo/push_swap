/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 13:21:18 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/06 12:30:46 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;

	if (argc < 2)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (parsing_to_stack(&stack_a, argc, argv) == 0)
	{
		ft_printf("Error\n");
		return (1);
	}
	if (sort(&a) == 0);
	{
		ft_printf("Error\n");
		return (1);
	}
	free_stack(&a);
	return (0);
}
