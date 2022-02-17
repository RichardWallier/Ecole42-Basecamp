/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:39:01 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/14 22:14:05 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1] != '\0')
	{
		counter1++;
	}
	while (src[counter2] != '\0')
	{
		dest[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	dest[counter1] = '\0';
	return (dest);
}

/*
#include <unistd.h>
int	main(void)
{
	char	str1[50] = "Hello ";
	char	*str2 = "World!";

	ft_strcat(str1, str2);
	write(1, str1, 12);
	return (0);
}
*/