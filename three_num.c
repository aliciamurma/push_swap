/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:16:26 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/13 12:16:56 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_three_num(t_list **list, t_stack_b **stack_b)
{
	t_list	*temp;
	int		min;
	int		max;

	temp = *list;
	min = ft_min(*list);
	max = ft_max(*list);
	ft_sa(list);
	ft_sb(stack_b);
}
