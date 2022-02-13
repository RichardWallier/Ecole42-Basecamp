/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:24:01 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/07 18:51:48 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	commaspc(void);

void	ft_print_combn(int n)
{
	char	number[3];
	int		i;
	int		m;

	i = 0;
	m = n - 1;
	while (number[m] <= '9')
	{
		while (i < n)
		{
			write(1, &number[i], 1);
			i++;
		}
		number[m]++;
		commaspc();
		i = 0;
	}
	while (i < n)
	{
		number[m] = 0;
		number[m + 1]++;
		i++;
	}
}

void	commaspc(void)
{
	write(1, ", ", 2);
}

/*
int	main(void)
{
	ft_print_combn(3);
}
*/
