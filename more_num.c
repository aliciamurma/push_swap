/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:20:35 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/20 10:20:51 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// https://github.com/anaiel/push_swap

void		ft_continue_more_more_a(t_list *list)
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

void		ft_continue_more_a(t_list *list)
{
	t_stack	*temp;
	
	temp = list->stack_a;
	ft_min_max(list);
	list->len_a = list->len_a / 2;
	printf("LEN ES %d\n", list->len_a);
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
	ft_more_num_b(list);
}

void		ft_more_num_a(t_list *list)
{
	t_stack	*temp;
	
	temp = list->stack_a;
	ft_min_max(list);
	ft_average_a(list);
	ft_median_a(list);

	ft_min_max(list);
	while (temp)
	{
			printf("%d\n", temp->data);
		if (temp && (temp->data <= list->median_a))
		{
			ft_pb(&list->stack_a, &list->stack_b);
		}
		else
		{	
			ft_ra(&list->stack_a);
			temp = temp->next;
		}

	}
//	ft_continue_more_a(list);
}

void		ft_quick_sort(t_list *list)
{
	t_stack	*temp_a;
//	t_stack	*temp_b;

	ft_min_max(list);
	ft_more_num_a(list);
	temp_a = list->stack_a;
// 	while (temp_a)
// 	{
// 		if (temp_a->data > temp_a->next->data)
// 			ft_quick_sort(list);
// //			printf("ME METO EN EL PRIMER IF\n");
// 		temp_a = temp_a->next;
// 	}
//  	temp_b = list->stack_b;
// 	ft_min_max(list);
// 	while (temp_b)
// 	{
// //		printf("ME METO EN EL SSEGUNDO WHILE\n");
// 		if (temp_b->data > temp_b->next->data)
// 			ft_quick_sort(list);
// //		printf("ME METO EN EL SSEGUNDO IF\n");
// 		temp_b = temp_b->next;
// 	}
}