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

void	ft_max_a(t_list *list)
{
	int 	cont;
	int		nbr;
	t_stack	*temp;

	cont = 0;
	nbr = 0;
	temp = list->stack_a;
	if (list->stack_a == NULL)
		return ;
	while (temp)
	{
		temp->index = cont;
		if (nbr == 0)
			nbr = temp->data;
		if (nbr < temp->data)
			nbr = temp->data;
		temp = temp->next;
		cont++;
		list->len_a = cont;
	}
	temp = list->stack_a;
	while (temp)
	{
		if (nbr == temp->data)
		{
			list->max_a = temp->index;
			return ;
		}
		temp = temp->next;
	}
}

void	ft_max_b(t_list *list)
{
	int 	cont;
	int		nbr;
	t_stack	*temp;

	cont = 0;
	nbr = 0;
	temp = list->stack_b;
	if (list->stack_b == NULL)
		return ;
	while (temp)
	{
		temp->index = cont;
		if (nbr == 0)
			nbr = temp->data;
		if (nbr < temp->data)
			nbr = temp->data;
		temp = temp->next;
		cont++;
		list->len_b = cont;
	}
	temp = list->stack_a;
	while (temp)
	{
		if (nbr == temp->data)
		{
			list->max_b = temp->index;
			return ;
		}
		temp = temp->next;
	}
}

void	ft_min_a(t_list *list)
{
	int		cont;
	int		nbr;
	t_stack	*temp;

	cont = 1;
	nbr = 0;
	temp = list->stack_a;
	while (temp)
	{
		temp->index = cont;
		if (nbr == 0)
			nbr = temp->data;
		if (nbr > temp->data)
			nbr = temp->data;
		temp = temp->next;
		cont++;
		list->len_a = cont;
	}
	temp = list->stack_a;
	while (temp)
	{
		if (nbr == temp->data)
		{
			list->min_a = temp->index;
			return ;
		}
		temp = temp->next;
	}
}

void	ft_min_b(t_list *list)
{
	int		cont;
	int		nbr;
	t_stack	*temp;

	cont = 1;
	nbr = 0;
	temp = list->stack_b;
	if (list->stack_b == NULL)
		return ;
	while (temp)
	{
		temp->index = cont;
		if (nbr == 0)
			nbr = temp->data;
		if (nbr > temp->data)
			nbr = temp->data;
		temp = temp->next;
		cont++;
		list->len_b = cont;
	}
	temp = list->stack_b;
	while (temp)
	{
		if (nbr == temp->data)
		{
			list->min_b = temp->index;
			return ;
		}
		temp = temp->next;
	}
}

void	ft_min_max(t_list *list)
{
	ft_min_a(list);
	ft_max_a(list);
	ft_min_b(list);
	ft_max_b(list);
}
