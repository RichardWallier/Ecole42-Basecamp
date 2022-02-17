/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 03:45:28 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/16 03:45:28 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
void	ft_putargv(char **str, int argc);

int	main(int argc, char *argv[])
{	
	if (argc <= 0)
		return (1);
	ft_putargv(argv, argc);
	return (0);
}

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		write(1, &str[index], 1);
		index++;
	}
	write(1, "\n", 1);
}

void	ft_putargv(char **str, int argc)
{
	int	index;

	index = 1;
	while (index < argc)
	{
		ft_putstr(str[index]);
		index++;
	}
}
