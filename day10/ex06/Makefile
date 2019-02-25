# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfrigo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 17:36:39 by rfrigo            #+#    #+#              #
#    Updated: 2018/09/04 18:32:59 by rfrigo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = do-op

OUT = do-op

SRC = main.c

all: $(PROGRAM)

$(PROGRAM):
	gcc -Wall -Wextra -Werror $(SRC) -o $(OUT)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(OUT)

re: fclean all
