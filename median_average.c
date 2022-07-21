/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median_average.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:02:07 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/21 11:02:16 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_average_a(t_list *list)
{
	t_stack	*temp;
	int		sumatoria;

	temp = list->stack_a;
	sumatoria = 0;
	while (temp)
	{
		sumatoria = sumatoria + temp->data;
		temp = temp->next;
	}
	list->average_a = (sumatoria / list->len_a);
	printf("ESTO ES el len %d\n", list->len_a);
	printf("ESTO ES sumatoria %d\n", sumatoria);
	printf("ESTO ES AVERAGE DE A %d\n", list->average_a);
}

void	ft_average_b(t_list *list)
{
	t_stack	*temp;
	int		sumatoria;

	temp = list->stack_b;
	sumatoria = 0;
	while (temp)
	{
		sumatoria = sumatoria + temp->data;
		temp = temp->next;
	}
	sumatoria = sumatoria + temp->data;
	list->average_b = (sumatoria / list->len_b);
}

void		ft_median_a(t_list * list)
{
	t_stack	*temp;
	
	temp = list->stack_a;
	list->len_a = list->len_a / 2;
	while (temp && list->len_a > 1)
	{
		temp = temp->next;
		list->len_a--;
	}
	list->median_a = temp->data;
		printf("median a is %d\n", list->median_a);
}

void		ft_median_b(t_list * list)
{
	t_stack	*temp;
	
	temp = list->stack_b;
	while (temp)
	{
		if (temp->index == list->average_b)
			list->median_b = temp->data;
		temp = temp->next;
	}
}
