/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/02 17:53:53 by mkinnear          #+#    #+#             */
/*   Updated: 2017/05/02 18:32:50 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		is_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		is_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (is_lowercase(str[i]) && word == 0)
			str[i] = str[i] + 32;
		else if (is_uppercase(str[i]) && word == 1)
			str[i] = str[i] + 32;
		if (!(is_alpha(str[i])))
			word = 0;
		else
			word = 1;
		i++;
	}
	return (str);
}
