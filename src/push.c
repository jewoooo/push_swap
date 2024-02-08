/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 06:07:05 by jewlee            #+#    #+#             */
/*   Updated: 2024/02/09 01:58:39 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static t_node	*push_node(t_stack **from)
{
	t_node	*node;

	node = (*from)->top;
	if ((*from)->size == 1)
	{
		(*from)->top = NULL;
		(*from)->bottom = NULL;
	}
	else
	{
		(*from)->top->prev->next = (*from)->bottom;
		(*from)->bottom->prev = (*from)->top->prev;
		(*from)->top = (*from)->top->prev;
		(*from)->bottom = (*from)->top->next;
	}
	((*from)->size)--;
	return (node);
}

static int	push(t_stack **from, t_stack **to)
{
	t_node	*from_top;

	if ((*from)->size == 0)
		return (1);
	from_top = push_node(from);
	if ((*to)->size == 0)
	{
		from_top->prev = from_top;
		from_top->next = from_top;
		(*to)->bottom = from_top;
	}
	else
	{
		from_top->prev = (*to)->top;
		from_top->next = (*to)->bottom;
		(*to)->top->next = from_top;
		(*to)->bottom->prev = from_top;
	}
	(*to)->top = from_top;
	((*to)->size)++;
	return (0);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_b, stack_a) == 1)
		return ;
	ft_putendl_fd("pa", 1);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	if (push(stack_a, stack_b) == 1)
		return ;
	ft_putendl_fd("pb", 1);
}

void logger(t_stack *a, t_stack *b)
{
	t_node *curr;
	
	curr = a->top;
	printf("----log start----\n");
	printf("stack a\n\n");
	for(int i =0; i< a->size; i++)
	{
		printf("%d:\n", curr->data);
		curr = curr->prev;
		if(curr == a->top)
			break ;
	}
	curr = b->top;
	printf("stack b\n\n");
	for(int i =0; i< b->size; i++)
	{
		printf("%d:\n", curr->data);
		curr = curr->prev;
		if(curr == b->top)
			break;
	}
	printf("----log end----\n");
}
