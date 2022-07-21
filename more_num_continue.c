/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_num_continue.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:12:21 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/21 11:12:31 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		ft_continue_more_more_b(t_list *list)
{
	t_stack	*temp;
	
	temp = list->stack_b;
	ft_min_max(list);
	list->len_b = list->len_b / 2;
	ft_average_b(list);
	ft_median_b(list);
	while (temp)
	{
		if (temp && (temp->data <= list->median_b))
		{
			ft_pa(&list->stack_a, &list->stack_b);
			temp = list->stack_b;
		}
		else
		{	
			ft_ra(&list->stack_b);
			temp = temp->next;
		}
	}
}

void		ft_continue_more_b(t_list *list)
{
	t_stack	*temp;
	
	temp = list->stack_a;
	ft_min_max(list);
	list->len_a = list->len_a / 2;
	ft_average_a(list);
	ft_median_a(list);
	while (temp)
	{
		if (temp && (temp->data <= list->median_a))
		{
			ft_pb(&list->stack_a, &list->stack_b);
			temp = list->stack_a;
		}
		else
		{	
			ft_ra(&list->stack_a);
			temp = temp->next;
		}
	}
}

void		ft_more_num_b(t_list *list)
{
	t_stack	*temp;
	
	temp = list->stack_b;
	ft_min_max(list);
	ft_average_b(list);
	ft_median_b(list);
//	printf("median a is %d\n", list->median_a);
	while (temp)
	{
		if (temp && (temp->data <= list->median_b))
		{
			ft_pa(&list->stack_a, &list->stack_b);
			temp = list->stack_b;
		}
		else
		{	
			ft_rb(&list->stack_b);
			temp = temp->next;
		}
	}
	ft_continue_more_b(list);
}
