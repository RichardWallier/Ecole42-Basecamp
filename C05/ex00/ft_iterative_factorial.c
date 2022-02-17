/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterative_factorial.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:40:23 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/15 01:40:23 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	index;
	int	result;

	if (nb < 0 || nb > 16)
		return (0);
	else if (nb <= 1)
		return (1);
	result = nb * (nb - 1);
	nb--;
	index = 1;
	while (nb > index)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
}
*/
