/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 21:05:08 by mkinnear          #+#    #+#             */
/*   Updated: 2017/05/05 08:44:57 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			if (str[index] >= 'k')
				str[index] -= 10;
			else
				str[index] += 16;
		}
		index++;
	}
	return (str);
}

char	*ft_uppercase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
			if (str[index] >= 'K')
				str[index] -= 10;
			else
				str[index] += 16;
		}
		index++;
	}
	return (str);
}

char	*ft_rot42(char *str)
{
	ft_lowercase(str);
	ft_uppercase(str);
	return (str);
}
