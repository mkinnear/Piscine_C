/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 22:08:38 by mkinnear          #+#    #+#             */
/*   Updated: 2017/04/23 18:33:12 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int a)
{
	int i;

	i = 1;
	while (i <= a)
	{
		if (i == 1 || i == a)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	midlinecrises(int b)
{
	int i;

	i = 1;
	while (i <= b)
	{
		if (i == 1 || i == b)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
}

void	lastline(int c)
{
	int i;

	i = 1;
	while (i <= c)
	{
		if (i == 1 || i == c)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
}

void	rush00(int x, int y)
{
	int i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
			{
				firstline(x);
				ft_putchar('\n');
			}
			else if (i == y)
			{
				lastline(x);
				ft_putchar('\n');
			}
			else
			{
				midlinecrises(x);
				ft_putchar('\n');
			}
			i++;
		}
	}
}
