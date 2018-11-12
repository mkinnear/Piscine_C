/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 23:13:37 by mkinnear          #+#    #+#             */
/*   Updated: 2017/04/23 18:31:34 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_line(int a)
{
	int row;

	row = 1;
	while (row <= a)
	{
		if (row == 1)
			ft_putchar('/');
		else if (row == a)
			ft_putchar('\\');
		else
			ft_putchar('*');
		row++;
	}
}

void	middle_line(int b)
{
	int row;

	row = 1;
	while (row <= b)
	{
		if (row == 1 || row == b)
			ft_putchar('*');
		else
			ft_putchar(' ');
		row++;
	}
}

void	bottom_line(int c)
{
	int row;

	row = 1;
	while (row <= c)
	{
		if (row == 1)
			ft_putchar('\\');
		else if (row == c)
			ft_putchar('/');
		else
			ft_putchar('*');
		row++;
	}
}

void	rush01(int x, int y)
{
	int column;

	column = 1;
	if (x > 0 && y > 0)
	{
		while (column <= y)
		{
			if (column == 1)
			{
				top_line(x);
				ft_putchar('\n');
			}
			else if (column == y)
			{
				bottom_line(x);
				ft_putchar('\n');
			}
			else
			{
				middle_line(x);
				ft_putchar('\n');
			}
			column++;
		}
	}
}
