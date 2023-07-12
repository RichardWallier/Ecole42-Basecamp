/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:25:57 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/13 18:28:33 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	valid_board_colup(int grid[4][4], int colupcount, int borders[4][4]);
int	valid_board_coldown(int grid[4][4], int coldowncount, int borders[4][4]);
int	valid_board_rowleft(int grid[4][4], int rowleftcount, int borders[4][4]);
int	valid_board_rowright(int grid[4][4], int rowrightcount, int borders[4][4]);

int	valid_row(int grid[4][4], int borders[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!valid_board_rowleft(grid, i, borders)
			|| !valid_board_rowright(grid, i, borders))
			return (0);
		i++;
	}
	return (1);
}

int	valid_col(int grid[4][4], int borders[4][4])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!valid_board_colup(grid, i, borders)
			|| !valid_board_coldown(grid, i, borders))
			return (0);
		i++;
	}
	return (1);
}

//test if grid are valid with the board
int	is_valid_board(int grid[4][4], int borders[4][4])
{
	if (!valid_row(grid, borders) || !valid_col(grid, borders))
		return (0);
	return (1);
}
