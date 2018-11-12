/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 16:40:08 by mkinnear          #+#    #+#             */
/*   Updated: 2017/05/02 17:12:04 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int index;
	int k;
	int size;

	index = 0;
	k = 0;
	size = 0;
	while (to_find[size])
		size++;
	if (size == 0)
		return (str);
	while (str[index])
	{
		while (to_find[k] == str[index + k])
		{
			if (k == size - 1)
				return (str + indez);
			k++;
		}
		k = 0;
		index++;
	}
	return (0);
}
