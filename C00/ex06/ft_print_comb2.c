/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:24:01 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/07 14:34:46 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int c);

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_putint(first);
			write(1, " ", 1);
			ft_putint(second);
			if (first < 98)
			{
				write(1, ", ", 2);
			}
			second++;
		}
		first++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int c)
{
	char	dec;
	char	uni;

	if (c <= 9)
	{
		uni = c + 48;
		write(1, "0", 1);
		write(1, &uni, 1);
	}
	else
	{
		uni = c / 10 + 48;
		dec = c % 10 + 48;
		write(1, &uni, 1);
		write(1, &dec, 1);
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/