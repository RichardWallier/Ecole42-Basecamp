/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 04:16:06 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/18 04:16:06 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] > 0)
		lenght++;
	return (lenght);
}

int	ft_strscat(int size, char **strs, char *sep, char *str)
{
	int	index;
	int	second_index;
	int	pos;

	index = 0;
	pos = 0;
	while (index < size)
	{
		second_index = 0;
		while (strs[index][second_index] != '\0')
		{
			str[pos] = strs[index][second_index];
			second_index++;
			pos++;
		}
		second_index = 0;
		while (index < size - 1 && sep[second_index] != '\0')
		{
			str[pos] = sep[second_index];
			pos++;
			second_index++;
		}
		index++;
	}
	return (pos);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		total_len;
	int		pos;
	char	*str;

	index = 0;
	total_len = 0;
	while (index < size)
		total_len += ft_strlen(strs[index++]);
	str = (char *) malloc(total_len + (size - 1) * ft_strlen(sep) + 1);
	if (str == NULL)
		return (NULL);
	pos = ft_strscat(size, strs, sep, str);
	str[pos] = '\0';
	return (str);
}

/*
#include <stdio.h>
int		main(void)
{
	int		index;
	char	**strs;
	char	*res_str;

	strs = malloc(3 * sizeof(char *));
	if (strs == NULL)
		return (1);
	index = 0;
	while (index < 3)
	{
		strs[index] = "teste";
		index++;
	}
	res_str = ft_strjoin(3, strs, ", ");
	if (res_str == NULL)
		return (1);
	printf("res: %s\n", res_str);
	free(strs);
	free(res_str);
	return (0);
}
*/