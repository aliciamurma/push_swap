



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

// https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e#:~:text=Radix%20sort%20on%20push_swap&text=As%20in%20radix%20sort%2C%20we,this%20number%20in%20stack%20B.

int		ft_check_if_sort(t_list *list)
{
	t_stack	*temp;

	temp = list->stack_a;
	while (temp)
	{
		if (temp->data < temp->next->data)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}
/*
void	ft_biggest(t_list *list)
{
	t_stack	*temp;

	temp = list->stack_a;
	ft_min_max(list);
	list->max_num = 0;
	while (temp)
	{
		if (temp->next && (temp->data < temp->next->data) && (temp->next->data > list->max_num))
		 		list->max_num = temp->next->data;
		temp = temp->next;
	}
	temp = list->stack_a;
	if (temp->data > list->max_num)
		list->max_num = temp->data;
	while (list->max_num)	//ESTO HAY QUE CAMBIARLO
	{
		list->max_num = list->max_num / 10;
		list->max_bits++;
	}
	printf("ESTO ES EL MAX_BITS %d\n", list->max_bits);
}
*/

void	ft_biggest(t_list *list)
{
	t_stack	*temp;

	temp = list->stack_a;
	ft_min_max(list);
	list->max_num = 0;
	while (temp)
	{
		if (temp->next && (temp->data < temp->next->data) && (temp->next->data > list->max_num))
		 		list->max_num = temp->next->data;
		temp = temp->next;
	}
	temp = list->stack_a;
	if (temp->data > list->max_num)
		list->max_num = temp->data;
	while (list->max_num)	//ESTO HAY QUE CAMBIARLO
	{
		list->max_num = list->max_num / 10;
		list->max_bits++;
	}
	printf("ESTO ES EL MAX_BITS %d\n", list->max_bits);
}

void	ft_big_sort(t_list *list)
{
	t_stack	*temp;

	list->bit = 0;
	temp = list->stack_a;
	ft_min_max(list);
	while (temp && list->len_a > 0 && list->max_bits)
	{

		if ((temp->data & (1 << list->bit)) == 0)
		{
			ft_pb(&list->stack_a, &list->stack_b);
			temp = list->stack_a;
			list->len_a--;
		}
		else
		{
			ft_ra(&list->stack_a);
			list->len_a--;
		}
	}
	printf("\n\n");
	ft_min_max(list);
	temp = list->stack_b;
	printf("ESTO ES LEN B %d\n", list->len_b);
	// while (temp && list->len_b > 0)
	// {
	// 	ft_pa(&list->stack_a, &list->stack_b);
	// 	list->len_b--;
	// }
	// list->max_bits--;
	// if (list->max_bits != 0)
	// 	ft_big_sort(list);
}
