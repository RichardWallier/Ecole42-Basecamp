/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:27:27 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/16 03:27:27 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb < 2)
		return (0);
	while (index <= nb / 2)
	{
		if (nb % index == 0)
			return (0);
		index++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	index;

	index = nb;
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(index))
		index++;
	return (index);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("is prime: %i\n", ft_is_prime(398));
	printf("next prime: %i\n", ft_find_next_prime(398));
	return (0);
}
*/