# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmallado <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/26 14:10:05 by lmallado          #+#    #+#              #
#    Updated: 2021/01/08 20:37:31 by lmallado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror

O_FILE=$(subst .cpp,.o,$(SRCS))

all: $(NAME)

$(NAME): $(O_FILE)
	clang++ $(FLAGS) $(O_FILE) -o $(NAME)

depend: .depend

.depend: $(SRCS)
	rm -rf ./.depend
	clang++ $(FLAGS) -MM $^>>./.depend;

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(O_FILE)

re:		fclean all

include .depend

.PHONY : all clean fclean re

