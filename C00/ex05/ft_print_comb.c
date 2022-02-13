/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:24:01 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/07 15:57:24 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	varchange(char *number);
void	commaspc(char *number);

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0';
	number[1] = '1';
	number[2] = '2';
	while (number [0] <= '9')
	{
		while (number[1] <= '9')
		{
			while (number[2] <= '9')
			{
				write(1, &number[0], 1);
				write(1, &number[1], 1);
				write(1, &number[2], 1);
				commaspc(number);
				number[2]++;
			}
			number[1]++;
			number[2] = number[1] + 1;
		}
		varchange(number);
	}
}

void	varchange(char *number)
{
	number[0]++;
	number[1] = number[0] + 1;
	number[2] = number[1] + 1;
}

void	commaspc(char *number)
{
	char	*commaspc;

	commaspc = ", ";
	if (number[0] < '7' )
	{
		write(1, commaspc, 2);
	}
}

/*
int	main(void)
{
	ft_print_comb();
}
*/