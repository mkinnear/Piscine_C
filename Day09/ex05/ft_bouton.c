/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkinnear <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 22:15:19 by mkinnear          #+#    #+#             */
/*   Updated: 2017/05/05 09:01:23 by mkinnear         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bouton(int i, int j, int k)
{
	if ((i >= j && i <= k) || (i <= j && i >= k))
		return (i);
	if ((j >= i && j <= k) || (j <= i && j >= k))
		return (j);
	if ((k >= j && k <= i) || (k <= j && k >= i))
		return (k);
}
