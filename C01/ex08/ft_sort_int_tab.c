/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 23:33:33 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/07 19:18:35 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	tmp = 0;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab [j];
				tab[j] = tmp;
			}
			j++;
		}
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

	tab[0] = 7;
	tab[1] = 3;
	tab[2] = 2;
	tab[3] = 8;
	tab[4] = 4;
	tab[5] = 5;
	tab[6] = 1;
	tab[7] = 6;
	tab[8] = 9;
	size = 9;
	i = 0;
	while (tab[i] <= size)
	{
		printf("%i", tab[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, size);

	i = 0;
	while (tab[i] <= size)
	{
		printf("%i", tab[i]);
		i++;
	}
	printf("\n");
}
*/
