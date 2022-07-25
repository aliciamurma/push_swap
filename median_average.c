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
	list->average_b = (sumatoria / list->len_b);
	printf("ESTO ES el len de b %d\n", list->len_b);
	printf("ESTO ES sumatoria de b %d\n", sumatoria);
	printf("ESTO ES AVERAGE DE B %d\n", list->average_b);
}

void	ft_median_a(t_list *list)
{
	t_stack	*temp;
	
	ft_min_max(list);
	temp = list->stack_a;
	list->len_a = list->len_a / 2;
	if (list->len_a == 1)
		list->median_a = temp->data;
	while (list->len_a > 1)
	{
		if (temp)
			temp = temp->next;
		list->len_a--;
		list->median_a = temp->data;
	}
	printf("median a is %d\n", list->median_a);
}

void	ft_median_b(t_list * list)
{
	t_stack	*temp;

	ft_min_max(list);
	temp = list->stack_b;
	list->len_b = list->len_b / 2;
	if (list->len_b == 1)
		list->median_b = temp->data;
	while (list->len_b > 1)
	{
		if (temp)
			temp = temp->next;
		list->len_b--;
		list->median_b = temp->data;
	}
	printf("median b is %d\n", list->median_b);
}
