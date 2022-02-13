/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 02:58:23 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/07 19:14:21 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 150;
	b = 3;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d \\ %d = %d, resto %d\n", a, b, div, mod);
}
*/
