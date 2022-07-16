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

//PA TOMA EL PRIMER ELEMENTO DEL STACK B Y LO PONE ENCIMA DEL STACK A
//NO HACE NADA SI EL STACK B ESTA VACIO

void	ft_pa(t_list **list, t_stack_b **stack_b)
{
	t_list		*temp;
	t_stack_b	*temp_b;
	int			data;

	temp = *list;
	if (temp->next == NULL)
		return ;
	temp_b = *stack_b;
	if (temp_b->next == NULL)
		return ;
	data = temp->data;
	temp->data = temp_b->data;
	temp_b->data = data;
	write (1, "pa\n", 3);
}

void	ft_pb(t_list **list, t_stack_b **stack_b)
{
	t_list		*temp;
	t_stack_b	*temp_b;
	int			data;

	temp = *list;
	if (temp->next == NULL)
		return ;
	temp_b = *stack_b;
	if (temp_b->next == NULL)
		return ;
	data = temp_b->data;
	temp_b->data = temp->data;
	temp->data = data;
	write (1, "pb\n", 3);
}
