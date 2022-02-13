/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:40:09 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/10 10:01:54 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
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
	char	*str = "abcdefg";
	int	test;

	test = ft_str_is_alpha(str);
	if(test == 1)
		printf("is alpha!\n");
	if(test != 1)
		printf("is NOT alpha!\n");
	return (0);
}
*/
