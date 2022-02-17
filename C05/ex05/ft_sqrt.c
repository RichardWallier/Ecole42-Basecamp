/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:26:18 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/16 03:26:18 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;
	int	result;

	index = 1;
	result = 0;
	if (nb <= 0 || nb == 2)
		return (0);
	else if (nb == 1)
		return (1);
	while (index <= 46340)
	{
		result = index * index;
		if (result == nb)
			return (index);
		index++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	ft_sqrt(4);
	printf("%i\n", ft_sqrt(16));
	return (0);
}
*/