/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcaetano <rcaetano@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:39:37 by rcaetano          #+#    #+#             */
/*   Updated: 2022/02/06 17:10:39 by rcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	firstline(int x);
void	lastline(int x);
void	middle(int x);

void	rush(int x, int y)
{
	int	j;

	if (y <= 0 || x <= 0)
		return ;
	firstline(x);
	ft_putchar('\n');
	if (y > 2)
	{
		j = 0;
		while (j < y - 2)
		{
			middle(x);
			ft_putchar('\n');
			j++;
		}
		lastline(x);
	}
	if (y == 2)
		lastline(x);
}

void	firstline(int x)
{
	char	alpha[3];
	int		i;

	alpha[0] = 'A';
	alpha[1] = 'B';
	alpha[2] = 'A';
	ft_putchar(alpha[0]);
	if (x == 2)
	{
		ft_putchar(alpha[2]);
	}
	if (x > 2)
	{
		i = 0;
		while (i < x - 2)
		{
			ft_putchar(alpha[1]);
			i++;
		}
		ft_putchar(alpha[2]);
	}
}

void	lastline(int x)
{
	char	alpha[3];
	int		i;

	alpha[0] = 'C';
	alpha[1] = 'B';
	alpha[2] = 'C';
	ft_putchar(alpha[0]);
	if (x == 2)
	{
		ft_putchar(alpha[2]);
	}
	if (x > 2)
	{
	i = 0;
		while (i < x - 2)
		{
			ft_putchar(alpha[1]);
			i++;
		}
		ft_putchar(alpha[2]);
	}
	ft_putchar('\n');
}

void	middle(int x)
{
	char	alpha[3];
	int		i;

	alpha[0] = 'B';
	alpha[1] = ' ';
	ft_putchar(alpha[0]);
	if (x == 2)
	{
		ft_putchar(alpha[0]);
	}
	if (x > 2)
	{
	i = 0;
		while (i < x - 2)
		{
			ft_putchar(alpha[1]);
			i++;
		}
		ft_putchar(alpha[0]);
	}
}
