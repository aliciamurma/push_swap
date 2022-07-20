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
void		ft_more_num(t_list *list)
{
	t_stack	*temp;
	int		mid_len;
	int		cont;
	
	cont = 0;
	temp = list->stack_a;
	ft_min_max(list);
	mid_len = list->len_a / 2;
	while (cont <= len && temp)
	{
		if (list->temp->data > list->temp->next->data)
			ft_ra(list->stack_a);
	}
	printf("mid len is %d\n", mid_len);
}
