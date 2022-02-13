/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:55:55 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/08 21:44:47 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab [size - i -1];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	tab[9];
	int	size;
	int	i;

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	tab[6] = 7;
	tab[7] = 8;
	tab[8] = 9;
	size = 9;
	i = 0;
	while (tab[i] <= size)
	{
		printf("%i", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);

	i = 0;
	while (tab[i] <= size)
	{
		printf("%i", tab[i]);
		i++;
	}
	printf("\n");
}
*/
