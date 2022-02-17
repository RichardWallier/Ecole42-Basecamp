/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:11:26 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/14 22:13:48 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	if (n == 0)
		return (0);
	while (index < n - 1 && s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		index++;
	}
	return (s1[index] - s2[index]);
}
/*
#include <stdio.h>
int main (void)
{
	char	s1[] = "abcdef";
	char	s2[] = "abcdEF";
	int		ret;

	ret = ft_strncmp(s1, s2, 4);

	if(ret < 0)
		printf("str1 is less than str2\n");
	else if(ret > 0)
		printf("str2 is less than str1\n");
	else
		printf("str1 is equal to str2\n");

	return (0);
}
*/