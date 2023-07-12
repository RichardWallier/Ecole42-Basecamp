/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:24:03 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/13 19:05:38 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkinput(char **argv);
void	ft_putchar(int grid);
void	populate(int grid[4][4]);
void	ft_putgrid(int grid[4][4]);
int		solver(int grid[4][4], int borders[4][4]);
void	populate_borders(char **argv, int borders[4][4]);

int	main(int argc, char *argv[])
{
	int	borders[4][4];
	int	grid[4][4];

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	populate(grid);
	if (!checkinput(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	populate_borders(argv, borders);
	if (solver(grid, borders))
	{
		ft_putgrid(grid);
		return (0);
	}
	write(1, "Error\n", 6);
	return (1);
}
