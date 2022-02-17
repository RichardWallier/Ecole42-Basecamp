/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:30:06 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/14 22:36:15 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}

/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char	s1[] = "abcdef";
	char	s2[] = "ABCDEF";
	int		ret;
	int		ret2;

	ret = ft_strcmp(s1, s2);
	ret2 =strcmp(s1, s2);

	if(ret < 0)
		printf("str1 is less than str2\n");
	else if(ret > 0)
		printf("str2 is less than str1\n");
	else
		printf("str1 is equal to str2\n");

	if(ret2 < 0)
		printf("str1 is less than str2\n");
	else if(ret2 > 0)
		printf("str2 is less than str1\n");
	else
		printf("str1 is equal to str2\n");

	return (0);
}
*/