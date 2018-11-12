/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rheukelm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/04 13:25:38 by rheukelm          #+#    #+#             */
/*   Updated: 2017/05/07 16:59:52 by dschutte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	colle(int x, int y);

int		ft_atoi(const char *str)
{
	int i;
	int nbr;
	int negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
			(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

int		check_parms(char **argv, int axis)
{
	int i;

	i = 0;
	while (argv[axis][i] != '\0')
	{
		if (argv[axis][i] >= 47 && argv[axis][i] <= 57)
			i++;
		else
		{
			return (1);
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	if (check_parms(argv, 1))
	{
		ft_putchar('\n');
		return (1);
	}
	if (check_parms(argv, 2))
	{
		ft_putchar('\n');
		return (1);
	}
	colle(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
