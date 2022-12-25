/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:14:04 by amurcia-          #+#    #+#             */
/*   Updated: 2022/12/25 20:23:22 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list		list;

	ft_errors_numbers(argc, argv);
	list.stack_b = NULL;
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
	ft_free(&list);
	return (0);
}

/*
void	ft_print_stacks(t_list list)
{
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
}
*/