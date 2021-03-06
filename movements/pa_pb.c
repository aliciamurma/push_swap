/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 21:21:12 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/15 21:21:26 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//PA TOMA EL PRIMER ELEMENTO DEL t_stack B Y LO PONE ENCIMA DEL t_stack A
//NO HACE NADA SI EL t_stack B ESTA VACIO

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
		// printf("EL SIGUIENTE ELEMENTO DE MI STACK A ES %d\n", (*stack_a)->data);
		// printf("EL SIGUIENTE ELEMENTO DE MI STACK A ES %d\n", (*stack_a)->next->data);
	}
	else
	{
		*stack_b = *stack_a;
		(*stack_b)->next = temp_b;
		*stack_a = temp_a;
	}
	write (1, "pb\n", 3);
}
