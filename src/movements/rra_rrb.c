/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 11:32:17 by amurcia-          #+#    #+#             */
/*   Updated: 2022/12/25 20:13:05 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief rra desplaza hacia abajo todos los elementos del stack A 1 posición
 * El último elemento se convierte en el primero
 * 
 * El último elemento señala el encabezado, y el encabezado = temp para
 * que siga apuntando al resto de elementos sin moverlos
 * 
 * @param stack_a 
 */
void	ft_rra_help(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*last;

	temp = *stack_a;
	while (temp->next)
	{
		if (temp->next->next == NULL)
			last = temp;
		temp = temp->next;
	}
	temp->next = *stack_a;
	*stack_a = temp;
	last->next = NULL;
}

void	ft_rra(t_stack **stack_a)
{
	ft_rra_help(stack_a);
	write (1, "rra\n", 4);
}

void	ft_rrb_help(t_stack **stack_b)
{
	t_stack	*temp;
	t_stack	*last;

	temp = *stack_b;
	while (temp->next)
	{
		if (temp->next->next == NULL)
			last = temp;
		temp = temp->next;
	}
	temp->next = *stack_b;
	*stack_b = temp;
	last->next = NULL;
}

void	ft_rrb(t_stack **stack_b)
{
	ft_rrb_help(stack_b);
	write (1, "rrb\n", 4);
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rra_help(stack_a);
	ft_rrb_help(stack_b);
	write (1, "rrr\n", 4);
}
