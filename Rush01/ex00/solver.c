/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:20:42 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/13 18:21:37 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

int	valid_board_colup(int grid[4][4], int colupcount, int borders[4][4]);
int	valid_board_coldown(int grid[4][4], int coldowncount, int borders[4][4]);
int	valid_board_rowleft(int grid[4][4], int rowleftcount, int borders[4][4]);
int	valid_board_rowright(int grid[4][4], int rowrightcount, int borders[4][4]);
int	valid_row(int grid[4][4], int borders[4][4]);
int	valid_col(int grid[4][4], int borders[4][4]);
int	is_valid_board(int grid[4][4], int borders[4][4]);

//find blank positions and return the row and col on solver
//change value to the trynumber
int	find_blank(int grid[4][4], int *row, int *col)
{
	*row = 0;
	*col = 0;
	while (*row < 4)
	{
		*col = 0;
		while (*col < 4)
		{
			if (grid[*row][*col] == 0)
			{
				return (1);
			}
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

// test if not have another equal number on row and col
int	is_safe_grid(int grid[4][4], int row, int col, int trynumber)
{
	int	rowindex;
	int	colindex;

	colindex = 0;
	rowindex = 0;
	while (colindex < SIZE)
	{
		if (grid[row][colindex] == trynumber)
		{
			return (0);
		}
		colindex++;
	}
	while (rowindex < SIZE)
	{
		if (grid[rowindex][col] == trynumber)
		{
			return (0);
		}
		rowindex++;
	}
	return (1);
}

//solving the grid, find blank grid, and initiate trynumber,
//try number after number in recursion(back tracking)
int	solver(int grid[4][4], int borders[4][4])
{
	int	row;
	int	col;
	int	trynumber;

	if (!find_blank(grid, &row, &col))
	{
		if (is_valid_board(grid, borders))
			return (1);
		return (0);
	}
	trynumber = 1;
	while (trynumber <= SIZE)
	{
		if (is_safe_grid(grid, row, col, trynumber))
		{
			grid[row][col] = trynumber;
			if (solver(grid, borders))
				return (1);
			grid[row][col] = 0;
		}
		trynumber++;
	}
	return (0);
}
