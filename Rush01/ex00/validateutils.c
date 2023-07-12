/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validateutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwallier <rwallier@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:25:11 by rwallier          #+#    #+#             */
/*   Updated: 2022/02/13 18:25:26 by rwallier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define SIZE 4

int	valid_board_colup(int grid[4][4], int colupcount, int borders[4][4])
{
	int	rowcount;
	int	maxnum;
	int	saw;

	rowcount = 0;
	maxnum = 0;
	saw = 0;
	while (rowcount < SIZE)
	{
		if (grid[rowcount][colupcount] > maxnum)
		{
			maxnum = grid[rowcount][colupcount];
			saw++;
		}
		rowcount++;
	}
	if (saw == borders[0][colupcount])
		return (1);
	return (0);
}

int	valid_board_coldown(int grid[4][4], int coldowncount, int borders[4][4])
{
	int	rowcount;
	int	maxnum;
	int	saw;

	rowcount = 3;
	maxnum = 0;
	saw = 0;
	while (rowcount >= 0)
	{
		if (grid[rowcount][coldowncount] > maxnum)
		{
			maxnum = grid[rowcount][coldowncount];
			saw++;
		}
		rowcount--;
	}
	if (saw == borders[1][coldowncount])
		return (1);
	return (0);
}

int	valid_board_rowleft(int grid[4][4], int rowleftcount, int borders[4][4])
{
	int	colcount;
	int	maxnum;
	int	saw;

	colcount = 0;
	maxnum = 0;
	saw = 0;
	while (colcount < SIZE)
	{
		if (grid[rowleftcount][colcount] > maxnum)
		{
			maxnum = grid[rowleftcount][colcount];
			saw++;
		}
		colcount++;
	}
	if (saw == borders[2][rowleftcount])
		return (1);
	return (0);
}

int	valid_board_rowright(int grid[4][4], int rowrightcount, int borders[4][4])
{
	int	colcount;
	int	maxnum;
	int	saw;

	colcount = 3;
	maxnum = 0;
	saw = 0;
	while (colcount >= 0)
	{
		if (grid[rowrightcount][colcount] > maxnum)
		{
			maxnum = grid[rowrightcount][colcount];
			saw++;
		}
		colcount--;
	}
	if (saw == borders[3][rowrightcount])
		return (1);
	return (0);
}
