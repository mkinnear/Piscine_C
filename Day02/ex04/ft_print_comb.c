/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/21 09:03:10 by mkinnear          #+#    #+#             */
/*   Updated: 2017/04/21 18:33:06 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int index[3];

	index[0] = 0;
	while (index[0] <= '7')
	{
		index[1] = index[0] + 1;
		while (index[1] != '8')
		{
			index[2] = index[1] + 1;
			while (index[2] <= '9')
			{
				ft_putchar(index[0]);
				ft_putchar(index[1]);
				ft_putchar(index[2]);
				if (index[0] != '7' && index[1] != '8' && index[2] != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				index[2]++;
			}
			index[1]++;
		}
		index[0]++;
	}
}
