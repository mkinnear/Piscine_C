/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 00:38:36 by mkinnear          #+#    #+#             */
/*   Updated: 2017/04/23 18:35:19 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	top_line(int a)
{
	int	i;

	i = 1;
	while (i <= a)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == a)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	middle_line(int b)
{
	int i;

	i = 1;
	while (i <= b)
	{
		if (i == 1 || i == b)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
}

void	bottom_line(int c)
{
	int i;

	i = 1;
	while (i <= c)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == c)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	rush03(int x, int y)
{
	int i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
			{
				top_line(x);
				ft_putchar('\n');
			}
			else if (i == y)
			{
				bottom_line(x);
				ft_putchar('\n');
			}
			else
			{
				middle_line(x);
				ft_putchar('\n');
			}
			i++;
		}
	}
}
