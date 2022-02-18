/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 05:13:04 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/16 05:13:04 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	size_t	len;
	void	*dest;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (dest == NULL)
		return (NULL);
	return ((char *) ft_strncpy(dest, src, len));
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str;
	char	*str_copy;
	char	*str2;
	char	*str_copy2;

	str = "Test 42";
	str_copy = ft_strdup(str);
	printf("cpy len: %li\n", strlen(str));
	printf("cpy len: %li\n", strlen(str_copy));
	printf("%s.\n", str);
	printf("%s.\n", str_copy);
	str2 = "Test 42";
	str_copy2 = strdup(str);
	printf("len: %li\n", strlen(str2));
	printf("len: %li\n", strlen(str_copy2));
	printf("original: %s.\n", str2);
	printf("original: %s.\n", str_copy2);
	return (0);
}
*/