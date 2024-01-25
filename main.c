/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:24:11 by jewlee            #+#    #+#             */
/*   Updated: 2024/01/26 01:04:04 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 1. 먼저 정렬이 되어 있을 경우 정렬할 필요 x.
// 2. 부분이 정렬 되어 있는지 확인 해야함. -> 삽입 정렬?
// 3. 연속된 증가 / 감소 배열 확인 -> 한번에 처리 가능
// 4. 퀵 소트 / 머지 소트

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_node	*node;
	t_node	*list;
	int	i;
	int	tmp;

	create_stack(&stack_a);
	create_stack(&stack_b);
	for (i = 1; i < argc; i++)
	{
		tmp = atoi(argv[i]);
		node = create_node(tmp);
		push(stack, node);
	}
	swap_a(stack);
	list = stack->Head;
	i = 1;
	while (1)
	{
		printf("%d: %d\n", i, list->Data);
		i++;
		list = list->Next;
		if (list == stack->Head)
			break ;
	}
}
