/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:54:17 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/10 10:10:01 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
		{
			str[i + 1] = str[i + 1] + 32;
		}
		if ((str[i] >= ' ' && str[i] <= '/') || (str[i] >= ':'
				&& str[i] <= '@') || (str[i] >= '['
				&& str[i] <= '`') || (str[i] >= '{' && str[i] <= '~'))
		{
			if (str[i + 1] >= 'a' && str[i] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*
#include <unistd.h>
#include <stdio.h>
int	main(void)
{
	char	str1[] = " Oi, tudo bem? 42Palavras quarenta-e-duas; dw+oois";

	ft_strcapitalize(str1);
	puts(str1);
	return (0);
}
*/