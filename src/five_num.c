/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:39:06 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/20 09:39:09 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_two_num(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		min;

	(void) stack_b;
	temp = *stack_a;
	min = ft_min_five(*stack_a);
	if (min == 2)
		ft_ra(stack_a);
}

//MIN Y MAX VAN A DAR LOS INDICES DE DONDE SE ENCUENTRAN LOS NUMEROS
//COMENZANDO POR EL 1, NO POR EL 0
void	ft_three_num(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		min;
	int		max;

	(void) stack_b;
	temp = *stack_a;
	min = ft_min_five(*stack_a);
	max = ft_max_five(*stack_a);
	if (max == 1 && min == 2)
		ft_ra(stack_a);
	else if (min == 1 && max == 2)
	{
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
	else if (min == 2)
		ft_sa(stack_a);
	else if (min == 3 && max == 2)
		ft_rra(stack_a);
	else if (min == 3 && max == 1)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
		ft_sa(stack_a);
	}
}

void	ft_four_num(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		min;
	int		max;

	temp = *stack_a;
	min = ft_min_five(*stack_a);
	max = ft_max_five(*stack_a);
	if (min == 2)
	{
		ft_sa(stack_a);
	}
	else if (min == 3)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (min == 4)
	{
		ft_rra(stack_a);
	}
	ft_pb(stack_a, stack_b);
	ft_three_num(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_five_num(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*temp;
	int		min;

	temp = *stack_a;
	min = ft_min_five(*stack_a);
	if (min == 2)
		ft_sa(stack_a);
	else if (min == 3)
	{
		ft_ra(stack_a);
		ft_ra(stack_a);
	}
	else if (min == 4)
	{
		ft_rra(stack_a);
		ft_rra(stack_a);
	}
	else if (min == 5)
	{
		ft_rra(stack_a);
	}
	ft_pb(stack_a, stack_b);
	ft_four_num(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
