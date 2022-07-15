/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 12:34:36 by amurcia-          #+#    #+#             */
/*   Updated: 2022/07/11 12:34:47 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_errors_numbers(int argc, char **argv)
{
	int	cont1;
	int	cont2;

	cont1 = 1;
	cont2 = 0;
	if (argc < 2)
		exit (0);
	while (argv[cont1])
	{
		cont2 = 0;
		while (argv[cont1][cont2])
		{
			if ((argv[cont1][cont2] == '-' && (argv[cont1][cont2 + 1] >= '0' && argv[cont1][cont2 + 1] <= '9'))
				|| (argv[cont1][cont2] >= '0' && argv[cont1][cont2] <= '9'))
				cont2++;
			else
				ft_putstr_error("\nError\nDame numeros, esto no se que es\n\n");
		}
		cont1++;
	}
	ft_int_max_value(argv);
	ft_errors_repeat(argv);
}

void	ft_errors_repeat(char **argv)
{
	int	cont1;
	int	cont2;

	cont1 = 1;
	cont2 = 1;
	while (argv[cont1])
	{
		cont2 = cont1 + 1;
		while (argv[cont2])
		{
			if (ft_strncmp(argv[cont1], argv[cont2]) == 0)
				ft_putstr_error("\nError\nNumeros repetidos\n\n");
			else
				cont2++;
		}
		cont1++;
	}
}

void	ft_int_max_value(char **argv)
{
	int cont1;

	cont1 = 1;
	while (argv[cont1])
	{
		if (ft_atoi_plus(argv[cont1]) >= 2147483647 || ft_atoi_plus(argv[cont1]) <= -2147483648)
			ft_putstr_error("\nError\nValores muy altos\n\n");
		else
			cont1++;
	}
}
