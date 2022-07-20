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

void		ft_more_num(t_list *list)
{
	t_stack	*temp;
	int		min;
	int		max;
	int		mid_len;
	
	temp = list->stack_a;
	min = ft_min(list->stack_a);
	max = ft_max(list->stack_a);
	mid_len = list->len / 2;
	// printf("mid len is %d\n", temp->last->index);
}
