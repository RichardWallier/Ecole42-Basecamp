/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:21:05 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/06 02:21:08 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 50;
	b = 100;
	printf("a = %i\nb = %i\n", a, b);
	ft_swap(&a, &b);
	printf("a = %i\nb = %i\n", a, b);
}
*/
