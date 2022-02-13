/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 03:27:29 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/06 03:27:40 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*str = "teste";
	int lenght = ft_strlen(str);
	printf("lenght = %i\n", lenght);
}
*/
