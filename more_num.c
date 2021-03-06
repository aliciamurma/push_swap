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

int		ft_check_if_sort(t_list *list)
{
	t_stack	*temp;

	temp = list->stack_a;
	while (temp)
	{
		if ((temp->next && (temp->data < temp->next->data)) || temp->next == NULL)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

void	ft_max_bit(t_list *list)
{
	int		bit;

	bit = 0;
	while (bit < 32)
	{
		if ((list->max_num & (1 << (31 - bit))) == 0)
			bit++;
		else
			break ;
	}
	list->max_bits = 32 - bit;
}

void	ft_biggest(t_list *list)
{
	t_stack	*temp;

	list->bit = 0;
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
	ft_max_bit(list);
}

void	ft_big_sort(t_list *list)
{
	t_stack	*temp;

	temp = list->stack_a;
	ft_min_max(list);
	while (temp && list->len_a > 0)
	{
		if ((temp->data & (1 << list->bit)) == 0)
		{
			ft_pb(&list->stack_a, &list->stack_b);
			temp = list->stack_a;
		}
		else
			ft_ra(&list->stack_a);
		list->len_a--;
	}
	ft_min_max(list);
	temp = list->stack_b;
	while (temp && list->len_b > 0)
	{
		ft_pa(&list->stack_a, &list->stack_b);
		list->len_b--;
	}
		printf("\n\n");
	list->bit++;
	list->max_bits--;
	if (list->max_bits > 0)
		ft_big_sort(list);
}


void	ft_game_number(t_list *list)
{
	t_stack	*temp;
	t_stack	*temp2;
	int		len_a2;
	int		cont;
	int		nbr;

	temp2 = list->stack_a;
	ft_min_max(list);
	len_a2 = list->len_a;
	while (len_a2 > 0)
	{
		cont = 0;
		nbr = temp2->data;
		temp = list->stack_a;
		ft_min_max(list);
		while (list->len_a > 0)
		{
			if (nbr > temp->data)
				cont++;
			list->len_a--;
			temp = temp->next;
		}
		temp2->game_number = cont;
		len_a2--;
		temp2 = temp2->next;
	}
}
