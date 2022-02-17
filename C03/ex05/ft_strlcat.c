/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:39:01 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/14 22:13:55 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	lenght;
	unsigned int	index;

	lenght = 0;
	index = 0;
	while (str[index] != '\0')
	{
		lenght++;
		index++;
	}
	return (lenght);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dsize;
	unsigned int	index;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	dsize = ft_strlen(dest);
	index = 0;
	while (src[index] != '\0' && dsize < size - 1)
	{
		dest[dsize] = src[index];
		dsize++;
		index++;
	}
	dest[dsize] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[index]));
}

/*
#include <stdio.h>
int main(void)
{
    char dest[30] = "dlfkjasfkj___";
    char str[40] = "DKFJasdfk";
    unsigned int rvalue;

    printf("Before: dest = %s\n", dest);
    rvalue = ft_strlcat(dest, str, 15);
    printf("After: dest = %s\n", dest);

    printf("%i\n", rvalue);
    return (0);
}
*/