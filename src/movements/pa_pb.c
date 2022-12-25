/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:21:12 by amurcia-          #+#    #+#             */
/*   Updated: 2022/12/25 20:13:40 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief pa toma el primer elemento del stack B y lo pone encima del stack A
 * No hace nada si el stack B está vacío
 * 
 * @param stack_a 
 * @param stack_b 
 */
void	ft_pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*temp_a;
	t_stack		*temp_b;

	temp_b = (*stack_b)->next;
	if (*stack_b == NULL)
		return ;
	temp_a = *stack_a;
	if (*stack_a == NULL)
	{
		*stack_a = *stack_b;
		(*stack_a)->next = NULL;
		*stack_b = temp_b;
	}
	else
	{
		*stack_a = *stack_b;
		(*stack_a)->next = temp_a;
		*stack_b = temp_b;
	}
	write (1, "pa\n", 3);
}

void	ft_pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*temp_a;
	t_stack		*temp_b;

	temp_a = (*stack_a)->next;
	if (*stack_a == NULL)
		return ;
	temp_b = *stack_b;
	if (*stack_b == NULL)
	{
		*stack_b = *stack_a;
		(*stack_b)->next = NULL;
		*stack_a = temp_a;
	}
	else
	{
		*stack_b = *stack_a;
		(*stack_b)->next = temp_b;
		*stack_a = temp_a;
	}
	write (1, "pb\n", 3);
}
