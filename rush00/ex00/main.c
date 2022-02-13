/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaetano <rcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:36:55 by rcaetano          #+#    #+#             */
/*   Updated: 2022/02/07 01:36:34 by rcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int b);
int		ft_atoi(char *str);

int	main(int argc, char *argv[])
{
	int		x;
	int		y;

	if (argc <= 2)
		return (1);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	rush(x, y);
	return (0);
}

//my atoi function
int	ft_atoi(char *str)
{
	int	result;
	int	i;
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < '0' || str[j] > '9')
			return (0);
		j++;
	}
	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result);
}
