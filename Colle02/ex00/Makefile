# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnyembe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/07 01:56:47 by mnyembe           #+#    #+#              #
#    Updated: 2017/05/07 01:56:51 by mnyembe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o rush-00 colle00.c collemain.c $(FLAG)
	gcc -o rush-01 colle01.c collemain.c $(FLAG)
	gcc -o rush-02 colle02.c collemain.c $(FLAG)
	gcc -o rush-03 colle03.c collemain.c $(FLAG)
	gcc -o rush-04 colle04.c collemain.c $(FLAG)
	gcc -o $(NAME) main.c compare.c print.c $(FLAG)

fclean:
	rm -f $(NAME) colle-00 colle-01 colle-02 colle-03 colle-04

re: fclean all
