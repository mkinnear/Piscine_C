/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnyembe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 01:40:02 by mnyembe           #+#    #+#             */
/*   Updated: 2017/05/07 16:44:59 by dschutte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	first(char *buf, int col, int row)
{
	char	str[4];

	str[0] = buf[0];
	str[1] = buf[col - 1];
	str[2] = buf[((col + 1) * row) - col - 1];
	str[3] = buf[((col + 1) * row) - 2];
	test4(str, row, col);
}

void	run_tests(char *buf, int row, int col)
{
	if (col == 1 && row == 1)
		test1(buf[0], row, col);
	if (row == 1 && col > 1)
		test2(buf[0], buf[col - 1], row, col);
	if (row > 1 && col == 1)
		test3(buf[0], buf[((col + 1) * row) - col - 1], row, col);
	if (row > 1 && col > 1)
		first(buf, col, row);
}

int		main(void)
{
	char	buf[BUFFER];
	int		i;
	int		row;
	int		col;
	int		count;

	i = 0;
	row = 0;
	col = 0;
	count = 0;
	while (count < 99999999)
		count++;
	count = 0;
	buf[read(0, buf, BUFFER)] = '\0';
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			row++;
		i++;
	}
	while (buf[col] != '\n')
		col++;
	run_tests(buf, row, col);
}
