/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnyembe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 01:55:54 by mnyembe           #+#    #+#             */
/*   Updated: 2017/05/07 16:43:52 by dschutte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	test1(char c, int row, int col)
{
	if (c == 'A')
	{
		print_out("[rush-02]", row, col);
		ft_putstr(" || ");
		print_out("[rush-03]", row, col);
		ft_putstr(" || ");
		print_out("[rush-04]", row, col);
	}
	if (c == 'o')
		print_out("[rush-00]", row, col);
	if (c == '/')
		print_out("[rush-01]", row, col);
	ft_putchar('\n');
}

void	test2(char c1, char c2, int row, int col)
{
	if (c1 == 'o')
		print_out("[rush-00]", row, col);
	if (c1 == '/')
	{
		print_out("[rush-01]", row, col);
	}
	if ((c1 == 'A') && (c2 == 'A'))
		print_out("[rush-02]", row, col);
	if ((c1 == 'A') && (c2 == 'C'))
	{
		print_out("[rush-03]", row, col);
		ft_putstr(" || ");
		print_out("[rush-04]", row, col);
	}
	ft_putchar('\n');
}

void	test3(char c1, char c2, int row, int col)
{
	if (c1 == 'o')
		print_out("[rush-00]", row, col);
	if (c1 == '/')
		print_out("[rush-01]", row, col);
	if ((c1 == 'A') && (c2 == 'A'))
		print_out("[rush-03]", row, col);
	if ((c1 == 'A') && (c2 == 'C'))
	{
		print_out("[rush-02]", row, col);
		ft_putstr(" || ");
		print_out("[rush-04]", row, col);
	}
	ft_putchar('\n');
}

void	test4(char *str, int row, int col)
{
	if (str[0] == 'o')
		print_out("[rush-00]", row, col);
	if (str[0] == '/')
		print_out("[rush-01]", row, col);
	if ((str[0] == 'A') && (str[1] == 'A'))
		print_out("[rush-02]", row, col);
	if ((str[0] == 'A') && (str[2] == 'A'))
		print_out("[rush-03]", row, col);
	if ((str[0] == 'A') && (str[3] == 'A'))
		print_out("[rush-04]", row, col);
	ft_putchar('\n');
}
