/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:12:03 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/16 06:52:40 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter1;
	unsigned int	counter2;

	counter1 = 0;
	counter2 = 0;
	while (dest[counter1] != '\0')
	{
		counter1++;
	}
	while (counter2 < nb && src[counter2] != '\0')
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
	char	dest[100] = "Hello ";
	char	src[] = "coder, welcome to 42!";

	ft_strncat(dest, src, 50);
	write(1, &dest, 50);
}
*/
