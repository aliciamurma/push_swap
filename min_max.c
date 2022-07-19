/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:11:47 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/13 10:12:21 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
int	ft_max(t_stack *stack_a)
{
	t_stack	*temp;
	int		nbr;

	temp = stack_a;
	nbr = 0;
	while (temp)
	{
		if (nbr == 0)
			nbr = temp->data;
		if (nbr < temp->data)
			nbr = temp->data;
		temp = temp->next;
	}
	temp = stack_a;
	while (temp)
	{
		if (nbr == temp->data)
			return (temp->index);
		temp = temp->next;
	}
	return  (0);
}

int	ft_min(t_stack *stack_a)
{
	t_stack	*temp;
	int		nbr;

	temp = stack_a;
	nbr = 0;
	while (temp)
	{
		if (nbr == 0)
			nbr = temp->data;
		if (nbr > temp->data)
			nbr = temp->data;
		temp = temp->next;
	}
	temp = stack_a;
	while (temp)
	{
		if (temp->data == nbr)
			return (temp->index);
		temp = temp->next;
	}
	return  (0);
}
