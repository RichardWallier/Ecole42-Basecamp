/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 01:14:27 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/15 01:14:27 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	long int	ret;
	int			i;
	int			sign;

	i = 0;
	ret = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
		str++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	if (sign % 2 == 0)
		return (ret);
	return (-1 * ret);
}

/*
#include <stdio.h>
int	main(void)
{
	char *str = "         ---+--+1243ab123";
		printf("%i\n", ft_atoi(str));
	return (0);
}
*/
