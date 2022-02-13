/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:41:35 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/10 10:03:02 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			j++;
		i++;
	}
	if (j != 0)
		return (0);
	return (1);
}

/*
#include <stdio.h>
int	main(void)
{
	char	*str = "42";
	int	test;

	test = ft_str_is_numeric(str);
	if(test == 1)
		printf("is numeric!\n");
	if(test != 1)
		printf("is NOT numeric!\n");
	return (0);
}
*/
