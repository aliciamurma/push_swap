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
/*
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
	printf("MAX == (%i)\n", nbr);
	while (temp)
	{
		printf("EL INDEX DEL NUMERO %d ES %d\n", temp->data, temp->index);
		if (nbr == temp->data)
			return (temp->index);
		temp = temp->next;
	}
	return  (0);
}*/


int	ft_max(t_stack *stack_a)
{
	int 	cont;
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
		//printf("EL INDEX ES%d\n\n", temp->index);
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
	return  (0);
}

/*
int	ft_min(t_stack *stack_a)
{
	t_stack	*nodo;
	t_stack	*temp;
	int		nbr;

	temp = stack_a;
	nbr = 0;
	while (temp)
	{
		nodo = (t_stack *)malloc(sizeof(t_stack));
		if (!nodo)
			return (0);
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
*/
