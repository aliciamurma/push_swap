/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_delete.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:11:13 by amurcia-          #+#    #+#             */
/*   Updated: 2022/12/25 20:33:13 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_if_sort(t_list *list)
{
	t_stack	*temp;

	temp = list->stack_a;
	while (temp)
	{
		if ((temp->next && (temp->data < temp->next->data))
			|| temp->next == NULL)
			temp = temp->next;
		else
			return (0);
	}
	return (1);
}

//TENEMOS QUE CREAR UN TEMPORAL PORQUE UNA VEZ TENGAMOS LA CABEZA
//DE LA stack_A, NO LA PODEMOS PERDER. MODIFICAMOS EL TEMP Y DESPUES
//SE LO ANADIMOS A LA stack_aA
//OJO QUE ES nodo->index = temp->index Y NO SALE TODO DE TEMP, PORQUE
//SI NO ESTARIAMOS COGIENDO EL INDICE DE UN SITIO QUE NO EXISTE,
//EL INDICE VA LIGADO AL NUEVO NODO CREADO, NO AL TEMP
void	ft_continue_stack_a(t_stack *stack_a)
{
	stack_a->data = 0;
	stack_a->next = NULL;
	stack_a->index = 1;
}

/**
 * @brief Creamos un temporal porque una vez apuntemos al encabezado
 * del stack A, no la podemos perder.
 * Modificamos temp y después se lo añadimos al stack A
 * OJO, es nodo->index = temp->index
 * Si no, estaríamos cogiendo el índice de un sitio que no existe
 * El índice va ligado al nuevo nodo creado, no al temp
 * 
 * @param argc 
 * @param argv 
 * @return t_stack* 
 */
t_stack	*ft_create_stack_a(int argc, char **argv)
{
	int		start;
	t_stack	*stack_a;
	t_stack	*temp;
	t_stack	*nodo;

	start = 2;
	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	ft_continue_stack_a(stack_a);
	temp = stack_a;
	temp->data = ft_atoi(argv[1]);
	while (start < argc)
	{
		nodo = (t_stack *)malloc(sizeof(t_stack));
		if (!nodo)
			return (NULL);
		nodo->index = temp->index + 1;
		nodo->data = ft_atoi(argv[start]);
		temp->next = nodo;
		temp = temp->next;
		start++;
	}
	temp->next = NULL;
	return (stack_a);
}

void	ft_more_five(t_list *list)
{
	if (ft_check_if_sort(list) == 1)
		exit (0);
	ft_game_number(list);
	list->nbr = 0;
	ft_biggest(list);
	ft_big_sort(list);
}

void	ft_free(t_list *list)
{
	t_stack	*temp;

	temp = list->stack_a;
	while (list->stack_a)
	{
		temp = list->stack_a->next;
		free (list->stack_a);
		list->stack_a = temp;
	}
	temp = list->stack_b;
	while (list->stack_b)
	{
		temp = list->stack_b->next;
		free (list->stack_b);
		list->stack_a = temp;
	}
}
