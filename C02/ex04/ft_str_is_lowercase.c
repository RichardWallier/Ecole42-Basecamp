/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:42:17 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/10 10:05:08 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	*str = "test";
	int	test;

	test = ft_str_is_lowercase(str);
	if(test == 1)
		printf("is lower!\n");
	if(test != 1)
		printf("is NOT lower!\n");
	return (0);
}
*/
