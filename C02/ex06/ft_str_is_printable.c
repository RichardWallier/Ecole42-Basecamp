/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:44:47 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/10 10:06:46 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 32)
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
	char	*str = "TESTE";
	int	test;

	test = ft_str_is_printable(str);
	if(test == 1)
		printf("is printable!\n");
	if(test != 1)
		printf("is NOT printable!\n");
	return (0);
}
*/
