/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:07:07 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/16 10:07:18 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>

//RA DESPLAZA HACIA ARRIBA TODOS LOS ELEMENTOS DEL STACK A UNA POSICION
//EL PRIMER ELEMENTO SE CONVIERTE EN EL ULTIMO
void	ft_ra(t_list **list)
{
	t_list	*temp;
	int		data;

	temp = *list;
	if (temp->next == NULL)
		return ;
	data = temp->data;
	while (temp->next)
	{
		temp->data = temp->next->data;
		temp = temp->next;
	}
	temp->data = data;
}

void	ft_rb(t_stack_b **stack_b)
{
	t_stack_b	*temp;
	int			data;

	temp = *stack_b;
	if (temp->next == NULL)
		return ;
	data = temp->data;
	while (temp->next)
	{
		temp->data = temp->next->data;
		temp = temp->next;
	}
	temp->data = data;
}

void	ft_rr(t_list **list, t_stack_b **stack_b)
{
	ft_ra(list);
	ft_rb(stack_b);
}

//RRA DESPLAZA HACIA ABAJO TODOS LOS ELEMENTOS DEL STACK A UNA POSICION
//EL ULTIMO ELEMENTO SE CONVIERTE EN EL PRIMERO
//OJO QUE *LIST ES EL ENCABEZADO, NO LA LISTA ENTERA
//HACEMOS QUE EL ULTIMO ELEMENTO SENALE AL ENCABEZADO Y QUE ESTE ENCABEZADO
//SEA IGUAL A TEMP, PARA QUE SIGA APUNTANDO AL RESTO DE ELEMENTOS SIN MOVERLOS
void	ft_rra(t_list **list)
{
	t_list	*temp;
	t_list	*last;

	temp = *list;
	while (temp->next)
	{
		if (temp->next->next == NULL)
			last = temp;
		temp = temp->next;
	}
	temp->next = *list;
	*list = temp;
	last->next = NULL;
}

void	ft_rrb(t_stack_b **stack_b)
{
	t_stack_b	*temp;
	t_stack_b	*last;

	temp = *stack_b;
	while (temp->next)
	{
		if (temp->next->next == NULL)
			last = temp;
		temp = temp->next;
	}
	temp->next = *stack_b;
	*stack_b = temp;
	last->next = NULL;
}

void	ft_rrr(t_list **list, t_stack_b **stack_b)
{
	ft_rra(list);
	ft_rrb(stack_b);
}
