/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnyembe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/07 01:54:17 by mnyembe           #+#    #+#             */
/*   Updated: 2017/05/07 15:56:29 by dschutte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

# include <sys/types.h>
# include <sys/uio.h>

# define BUFFER 5242880

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	print_out(char *colle, int row, int col);
void	test1(char c, int row, int col);
void	test2(char c1, char c2, int row, int col);
void	test3(char c1, char c2, int row, int col);
void	test4(char *str, int row, int col);
void	first(char *buf, int col, int row);

#endif
