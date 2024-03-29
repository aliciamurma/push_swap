/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 10:11:47 by amurcia-          #+#    #+#             */
/*   Updated: 2022/12/25 20:25:53 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_assing_index_max_a(t_list *list, int nbr)
{
	t_stack	*temp;

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

void	ft_assing_index_min_a(t_list *list, int nbr)
{
	t_stack	*temp;

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

void	ft_max_a(t_list *list)
{
	int		cont;
	int		nbr;
	t_stack	*temp;

	temp = list->stack_a;
	if (list->stack_a == NULL)
		return ;
	cont = 0;
	nbr = temp->data;
	while (temp)
	{
		temp->index = cont;
		if (nbr < temp->data)
			nbr = temp->data;
		temp = temp->next;
		cont++;
	}
	list->len_a = cont;
	ft_assing_index_max_a(list, nbr);
}

void	ft_min_a(t_list *list)
{
	int		cont;
	int		nbr;
	t_stack	*temp;

	cont = 1;
	temp = list->stack_a;
	nbr = temp->data;
	while (temp)
	{
		temp->index = cont;
		if (nbr > temp->data)
			nbr = temp->data;
		temp = temp->next;
		cont++;
		list->len_a = cont;
	}
	ft_assing_index_min_a(list, nbr);
}

void	ft_min_max(t_list *list)
{
	ft_min_a(list);
	ft_max_a(list);
	ft_min_b(list);
	ft_max_b(list);
}
