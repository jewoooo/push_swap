/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jewlee <jewlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:57:07 by jewlee            #+#    #+#             */
/*   Updated: 2024/01/25 22:37:05 by jewlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_node {
	int				data;
	struct s_node	*prev;
	struct s_node	*next;
}	t_node;

typedef struct s_stack {
	int		size;
	t_node	*head;
	t_node	*top;
}	t_stack;

t_node	*create_node(int data);
void	create_stack(t_stack **stack);
void	push_front(t_stack *stack, t_node *new);
int		is_empty(t_stack *stack);
int		is_one(t_stack *stack);
void	destroy_node(t_node *node);
void	destroy_stack(t_stack **stack);

void	stack_swap(t_stack *stack);
void	move_top(t_stack *from, t_stack *to);
void	stack_rotate(t_stack *stack);
void	stack_reverse_rotate(t_stack *stack);

#endif
