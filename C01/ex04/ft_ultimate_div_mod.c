/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 03:16:55 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/06 03:17:24 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	divtmp;
	int	modtmp;

	divtmp = *a / *b;
	modtmp = *a % *b;
	*a = divtmp;
	*b = modtmp;
}

/*
#include <stdio.h>

int	main(void)
{
	int a;
	int b;

	a = 50;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div = %i\nmod = %i", a, b);
}
*/
