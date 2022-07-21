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

// https://github.com/anaiel/push_swap

//TENEMOS QUE CREAR UN TEMPORAL PORQUE UNA VEZ TENGAMOS LA CABEZA
//DE LA stack_aA, NO LA PODEMOS PERDER. MODIFICAMOS EL TEMP Y DESPUES
//SE LO ANADIMOS A LA stack_aA
//OJO QUE ES nodo->index = temp->index Y NO SALE TODO DE TEMP, PORQUE
//SI NO ESTARIAMOS COGIENDO EL INDICE DE UN SITIO QUE NO EXISTE,
//EL INDICE VA LIGADO AL NUEVO NODO CREADO, NO AL TEMP
t_stack	*ft_create_stack_a(int argc, char **argv)
{
	int	start;
	t_stack	*stack_a;
	t_stack	*temp;
	t_stack	*nodo;
	start = 2;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	if (!stack_a)
		return (NULL);
	stack_a->data = 0;
	stack_a->next = NULL;
	stack_a->index = 1;
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

int	main(int argc, char **argv)
{
	t_list		list;

	// stack_b = (t_stack *)malloc(sizeof(t_stack));
	// if (!stack_b)
	// 	return (0);
	list.stack_b = NULL;
	ft_errors_numbers(argc, argv);
	list.stack_a = ft_create_stack_a(argc, argv);
	if  (argc == 3)
		ft_two_num(&list.stack_a, &list.stack_b);
	if  (argc == 4)
		ft_three_num(&list.stack_a, &list.stack_b);
	if  (argc == 5)
		ft_four_num(&list.stack_a, &list.stack_b);
	if  (argc == 6)
		ft_five_num(&list.stack_a, &list.stack_b);
	if  (argc > 6)
		ft_quick_sort(&list);
	while (list.stack_a)
	{
		printf("%d\n", list.stack_a->data);
		list.stack_a = list.stack_a->next;
	}
	printf("\n");
	while (list.stack_b)
	{
		printf("%d\n", list.stack_b->data);
		list.stack_b = list.stack_b->next;
	}
	return (0);
}
