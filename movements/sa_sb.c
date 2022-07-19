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

//SA INTERCAMBIA LOS DOS PRIMEROS ELEMENTOS ENCIMA DEL STACK A
//NO HACE NADA SI HAY UNO O MENOS ELEMENTOS
void	ft_sa_help(t_stack **stack_a)
{
	t_stack	*temp;
	int		data;

	temp = *stack_a;
	if (temp->next == NULL)
		return ;
	data = temp->data;
	temp->data = temp->next->data;
	temp->next->data = data;
}

void	ft_sa(t_stack **stack_a)
{
	ft_sa_help(stack_a);
	write(1, "sa\n", 3);
}

void	ft_sb_help(t_stack **stack_b)
{
	t_stack	*temp;
	int			data;

	temp = *stack_b;
	if (temp->next == NULL)
		return ;
	data = temp->data;
	temp->data = temp->next->data;
	temp->next->data = data;
}

void	ft_sb(t_stack **stack_b)
{
	ft_sb_help(stack_b);
	write(1, "sa\n", 3);
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_sb_help(stack_b);
	ft_sa_help(stack_a);
	write(1, "ss\n", 3);
}
