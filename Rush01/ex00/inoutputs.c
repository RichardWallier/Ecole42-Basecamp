/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inoutputs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:14:23 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/13 18:58:03 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		checkinput(char **argv);
void	ft_putchar(int grid);
void	populate(int grid[4][4]);
void	ft_putgrid(int grid[4][4]);
int		solver(int grid[4][4], int borders[4][4]);
void	populate_borders(char **argv, int borders[4][4]);

void	populate_borders(char **argv, int borders[4][4])
{
	int	index;
	int	border;
	int	position;

	index = 0;
	border = 0;
	position = 0;
	while (border < 4)
	{
		position = 0;
		while (position < 4)
		{
			if (argv[1][index] >= '0' && argv[1][index] <= '9')
			{
				borders[border][position] = argv[1][index] - 48;
				position++;
			}
			index++;
		}
		border++;
	}
}

int	checkinput(char **argv)
{
	int	index;
	int	numbers;

	numbers = 0;
	index = 0;
	while (argv[1][index] != '\0')
	{
		if (argv[1][index] >= '0' && argv[1][index] <= '9')
		{
			numbers++;
		}
		index++;
	}
	if (numbers != 16)
		return (0);
	return (1);
}

void	ft_putgrid(int grid[4][4])
{
	int	rowprint;
	int	colprint;

	rowprint = 0;
	colprint = 0;
	while (rowprint < 4)
	{
		while (colprint < 4)
		{
			ft_putchar(grid[rowprint][colprint]);
			if (colprint != 3)
				write(1, " ", 1);
			colprint++;
		}
		colprint = 0;
		write(1, "\n", 1);
		rowprint++;
	}
}

void	ft_putchar(int grid)
{
	char	result;

	result = grid + 48;
	write(1, &result, 1);
}

void	populate(int grid[4][4])
{
	int	rowpop;
	int	colpop;

	rowpop = 0;
	colpop = 0;
	while (rowpop < 4)
	{
		while (colpop < 4)
		{
			grid[rowpop][colpop] = 0;
			colpop++;
		}
		colpop = 0;
		rowpop++;
	}
}
