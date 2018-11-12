/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/22 15:08:35 by mkinnear          #+#    #+#             */
/*   Updated: 2017/04/23 18:34:23 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstline(int a)
{
	int i;

	i = 1;
	while (i <= a)
	{
		if (i == 1)
			ft_putchar('A');
		else if (i == a)
			ft_putchar('A');
		else
			ft_putchar('B');
		i++;
	}
}

void	midlinecrisis(int b)
{
	int i;

	i = 1;
	while (i <= b)
	{
		if (i == 1)
			ft_putchar('B');
		else if (i == b)
			ft_putchar('B');
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
		if (i == 1)
			ft_putchar('C');
		else if (i == c)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
}

void	rush02(int x, int y)
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
				midlinecrisis(x);
				ft_putchar('\n');
			}
			i++;
		}
	}
}
