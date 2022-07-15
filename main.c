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
#include <stdio.h>

//TENEMOS QUE CREAR UN TEMPORAL PORQUE UNA VEZ TENGAMOS LA CABEZA
//DE LA LISTA, NO LA PODEMOS PERDER. MODIFICAMOS EL TEMP Y DESPUES
//SE LO ANADIMOS A LA LISTA
//OJO QUE ES nodo->index = temp->index Y NO SALE TODO DE TEMP, PORQUE
//SI NO ESTARIAMOS COGIENDO EL INDICE DE UN SITIO QUE NO EXISTE,
//EL INDICE VA LIGADO AL NUEVO NODO CREADO, NO AL TEMP
t_list	*ft_create_list(int argc, char **argv)
{
	int	start;
	t_list	*list;
	t_list	*temp;
	t_list	*nodo;
	start = 2;

	list = (t_list *)malloc(sizeof(t_list));
	if (!list)
		return (NULL);
	list->data = 0;
	list->next = NULL;
	list->index = 1;
	temp = list;
	temp->data = ft_atoi(argv[1]);
	while (start < argc)
	{
		nodo = (t_list *)malloc(sizeof(t_list));
		if (!nodo)
			return (NULL);
		nodo->index = temp->index + 1;
		nodo->data = ft_atoi(argv[start]);
		temp->next = nodo;
		temp = temp->next;
		printf("Nuevo elemento lista con index %d\n",temp->index );
		start++;
	}
	temp->next = NULL;
	return (list);
}

int	main(int argc, char **argv)
{
	t_list	*list;

	ft_errors_numbers(argc, argv);
	list = ft_create_list(argc, argv);
	if  (argc <= 4)
		ft_three_num(&list);
/*	if  (argc <= 6)
		ft_five_argc();
	if  (argc > 6)
		ft_more_argc();*/
	while (list)
	{
		printf("%d\n", list->data);
		list = list->next;
	}
	return (0);
}
