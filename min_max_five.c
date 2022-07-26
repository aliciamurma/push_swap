/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:26:43 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/20 12:26:54 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_max_five(t_stack *stack_a)
{
	int		cont;
	t_stack	*temp;
	int		nbr;

	cont = 1;
	temp = stack_a;
	nbr = 0;
	while (temp)
	{
		temp->index = cont;
		if (nbr == 0)
			nbr = temp->data;
		if (nbr < temp->data)
			nbr = temp->data;
		temp = temp->next;
		cont++;
	}
	temp = stack_a;
	while (temp)
	{
		if (nbr == temp->data)
			return (temp->index);
		temp = temp->next;
	}
	return (0);
}

int	ft_min_five(t_stack *stack_a)
{
	int		cont;
	t_stack	*temp;
	int		nbr;

	cont = 1;
	temp = stack_a;
	nbr = 0;
	while (temp)
	{
		temp->index = cont;
		if (nbr == 0)
			nbr = temp->data;
		if (nbr > temp->data)
			nbr = temp->data;
		temp = temp->next;
		cont++;
	}
	temp = stack_a;
	while (temp)
	{
		if (temp->data == nbr)
			return (temp->index);
		temp = temp->next;
	}
	return (0);
}
