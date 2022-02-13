/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:43:17 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/10 10:05:55 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char	*str = "TEST";
	int	test;

	test = ft_str_is_uppercase(str);
	if(test == 1)
		printf("is upper!\n");
	if(test != 1)
		printf("is NOT upper!\n");
	return (0);
}
*/
