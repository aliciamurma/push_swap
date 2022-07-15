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

void	ft_three_num(t_list **list)
{
	t_list	*temp;
	int		min;
	int		max;

	temp = *list;
	min = ft_min(*list);
	max = ft_max(*list);
	while (temp)
	{
		if (argv[1] > argv[2] && argv[2] < argv[3]);
			ft_sa(list);
		else if (argv[1] > argv[2] && argv[2] > argv[3] && argv[3] > argv[4])
		{
			/* code */
		}
		temp = temp->next;
	}
}
