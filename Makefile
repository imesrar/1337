# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imesrar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/09 13:47:21 by imesrar           #+#    #+#              #
#    Updated: 2018/10/15 15:47:37 by imesrar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

HEAD=libft.h

all: $(NAME)

$(NAME):
	gcc -I$(HEAD) -Wall -Werror -Wextra -c *.c
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	/bin/rm -rf *.o
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all
