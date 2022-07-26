/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:14:04 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/11 11:14:45 by amurcia-         ###   ########.fr       */
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
//DE LA stack_aA, NO LA PODEMOS PERDER. MODIFICAMOS EL TEMP Y DESPUES
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

int	main(int argc, char **argv)
{
	t_list		list;

	list.stack_b = NULL;
	ft_errors_numbers(argc, argv);
	list.stack_a = ft_create_stack_a(argc, argv);
	if (ft_check_if_sort(&list) == 1)
		return (0);
	if (argc == 3)
		ft_two_num(&list.stack_a, &list.stack_b);
	else if (argc == 4)
		ft_three_num(&list.stack_a, &list.stack_b);
	else if (argc == 5)
		ft_four_num(&list.stack_a, &list.stack_b);
	else if (argc == 6)
		ft_five_num(&list.stack_a, &list.stack_b);
	else
		ft_more_five(&list);
	return (0);
}

/*
	printf("STACK A\n");
	while (list.stack_a)
	{
		printf("%d\n", list.stack_a->data);
		list.stack_a = list.stack_a->next;
	}
	printf("\n\n");
	printf("STACK B\n");
	while (list.stack_b)
	{
		printf("%d\n", list.stack_b->data);
		list.stack_b = list.stack_b->next;
	}
	*/