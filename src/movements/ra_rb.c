/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:07:07 by amurcia-          #+#    #+#             */
/*   Updated: 2022/12/25 20:11:51 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "push_swap.h"

/**
 * @brief ra desplaza hacia arriba todos los elementos del stack A 1 posición
 * El primer elemento se convierte en el último
 * 
 * @param stack_a 
 */
void	ft_ra_help(t_stack **stack_a)
{
	t_stack	*temp;
	int		data;

	temp = *stack_a;
	if (temp->next == NULL)
		return ;
	data = temp->data;
	while (temp->next)
	{
		temp->data = temp->next->data;
		temp->game_number = temp->next->game_number;
		temp = temp->next;
	}
	temp->data = data;
}

void	ft_ra(t_stack **stack_a)
{
	ft_ra_help(stack_a);
	write (1, "ra\n", 3);
}

void	ft_rb_help(t_stack **stack_b)
{
	t_stack	*temp;
	int		data;

	temp = *stack_b;
	if (temp->next == NULL)
		return ;
	data = temp->data;
	while (temp->next)
	{
		temp->data = temp->next->data;
		temp = temp->next;
	}
	temp->data = data;
}

void	ft_rb(t_stack **stack_b)
{
	ft_rb_help(stack_b);
	write (1, "rb\n", 3);
}

void	ft_rr(t_stack **stack_a, t_stack **stack_b)
{
	ft_ra_help(stack_a);
	ft_rb_help(stack_b);
	write (1, "rr\n", 3);
}
