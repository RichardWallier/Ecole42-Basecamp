/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:55:14 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/18 03:55:14 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	*tab;
	int	number;

	if (min >= max)
		return (0);
	tab = malloc((max * sizeof(int)) - (min * sizeof(int)));
	if (tab == NULL)
		return (0);
	index = 0;
	number = min;
	while (index < max - min)
	{
		tab[index] = number;
		index++;
		number++;
	}
	return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*tab;
	tab = ft_range(0, 42);
	int index = 0;
	while (index < 42)
	{
		printf("%i ", tab[index]);
		index++;
	}
}
*/