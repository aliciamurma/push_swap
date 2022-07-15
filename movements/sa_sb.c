/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:33:27 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/13 12:33:55 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

//SA INTERCAMBIA LOS DOS PRIMEROS ELEMENTOS ENCIMA DEL STACK A
//NO HACE NADA SI HAY UNO O MENOS ELEMENTOS
t_list	*ft_sa(t_list **list)
{
	t_list	*temp;
	int		data;

	temp = *list;
	if (temp->next == NULL)
		return (*list);
	data = temp->data;
	temp->data = temp->next->data;
	temp->next->data = data;
	write(1, "sa\n", 3);
	return (*list);
}

t_stack_b	*ft_sb(t_stack_b **stack_b)
{
	t_stack_b	*temp;
	int		data;

	temp = *stack_b;
	if (temp->next == NULL)
		return (*stack_b);
	data = temp->data;
	temp->data = temp->next->data;
	temp->next->data = data;
	write(1, "sa\n", 3);
	return (*stack_b);
}
