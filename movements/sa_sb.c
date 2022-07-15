/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:33:27 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/13 12:33:55 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

//SA INTERCAMBIA LOS DOS PRIMEROS ELEMENTOS ENCIMA DEL STACK A
//NO HACE NADA SI HAY UNO O MENOS ELEMENTOS
t_list	*ft_sa(t_list **list)
{
	t_list	*temp;

	temp = *list;
	if (temp->next == NULL)
		return (*list);
	temp->next = temp;
	temp = temp->next->next;
	write(1, "sa\n", 3);
	while(temp)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
	return (*list);
}
