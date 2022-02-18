/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 22:22:51 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/17 22:22:51 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	number;

	if (min >= max)
		return (0);
	*range = malloc((max * sizeof(int)) - (min * sizeof(int)));
	if (range == NULL)
		return (0);
	index = 0;
	number = min;
	while (index < max - min)
	{
		(*range)[index] = number;
		index++;
		number++;
	}
	return (max - min);
}

/*
#include <stdio.h>

int	main(void)
{
	int	*range;
	int	size;
	size = ft_ultimate_range(&range, 0, 42);
	int index = 0;
	while (index < 42)
	{
		printf("%i ", range[index]);
		index++;
	}
	printf("\n%i\n", size);
	return (0);
}
*/