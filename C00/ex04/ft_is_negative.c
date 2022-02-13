/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 01:31:48 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/03 01:41:13 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	if (n >= 0)
	{
		write(1, "P", 1);
	}
}

/*
int main(void)
{
	int	number;

	number = 42;
	ft_is_negative(number);
	return (0);
}
*/