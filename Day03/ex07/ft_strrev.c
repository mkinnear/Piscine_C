/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/26 18:19:03 by mkinnear          #+#    #+#             */
/*   Updated: 2017/04/28 06:04:24 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		index;
	int		len;
	char	tmp;

	len = ft_strlen(str);
	index = 0;
	while (index < len)
	{
		tmp = str[index];
		str[index] = str[len - 1];
		str[len - 1] = tmp;
		index++;
		len--;
	}
	return (str);
}
